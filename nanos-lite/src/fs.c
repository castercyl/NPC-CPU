#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
  size_t open_offset; // I DO 记录当前文件操作的位置，距离该文件的起始地址的字节偏移数
} Finfo;

//enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};
//enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_EVENTS, FD_FB}; //I DO
enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB, FD_EVENTS, FD_DISPINFO}; //I DO

size_t ramdisk_read(void *buf, size_t offset, size_t len);//I DO
size_t ramdisk_write(const void *buf, size_t offset, size_t len);//I DO
size_t serial_write(const void *buf, size_t offset, size_t len);//I DO
size_t events_read(void *buf, size_t offset, size_t len); //I DO
size_t dispinfo_read(void *buf, size_t offset, size_t len); //I DO
size_t fb_write(const void *buf, size_t offset, size_t len); //I DO

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  /*
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, invalid_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, invalid_write},
  */
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write, 0}, //I DO 因为我自己添加了一个量 openoffset
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, serial_write, 0},//I DO
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, serial_write, 0},//I DO
  [FD_FB]     = {"fb", 0, 0, invalid_read, fb_write, 0}, //I DO
  [FD_EVENTS] = {"events", 0, 0, events_read, invalid_write, 0},//I DO
  [FD_DISPINFO] = {"dispinfo", 0, 0, dispinfo_read, invalid_write, 0},//I DO
#include "files.h"
};

void init_fs() {
  // TODO: initialize the size of /dev/fb
  AM_GPU_CONFIG_T screen_cfg = io_read(AM_GPU_CONFIG);
  file_table[FD_FB].size = screen_cfg.width * screen_cfg.height * sizeof(uint32_t); //每个像素是32位整数
}

//-----I DO------------------
int fs_open(const char *pathname, int flags, int mode) {
  //函数入口：输入文件名，返回文件名对应的文件编号
  int FILE_NUMBER = 23;   //通过#include <fs.h>可查询到固定共有20个文件 + 3个特殊文件：stdin,stdout,stderr
  for (int i = 0; i < FILE_NUMBER; i++){
    if (strcmp(pathname, file_table[i].name) == 0){
      file_table[i].open_offset = 0;
      return i;  //返回与之匹配的是第几个文件
    }
  }
  assert(0);  //未知文件，全不匹配
  
  return -1;
}

int fs_close(int fd) {
  //函数入口：输入文件编号，返回0，总表示文件关闭成功
  return 0; //sfs没有维护文件打开的状态，返回0表示总是关闭成功
}

size_t fs_read(int fd, void *buf, size_t len) {  //fd 是文件编号，表示读哪个文件。返回此次读文件的字节数
//函数入口：输入文件编号、目的地址、读字节数。往目的地址从对应的文件中读取len个字节内容到buf。返回实际读字节的个数
  if(fd == FD_EVENTS){
    return events_read(buf, 0, len);
  }
  if(fd == FD_DISPINFO) {
    return dispinfo_read(buf, 0, len);
  }
  int READ_LENGTH = 0;
  int THEORY_LENGTH = file_table[fd].size - file_table[fd].open_offset;
  if (THEORY_LENGTH > len){
    READ_LENGTH = len;    //剩余读长度小于要读的长度，则以实际剩余长度为准，读完
  }
  else{
    READ_LENGTH = THEORY_LENGTH;
  }
  if(READ_LENGTH < 0){
    assert(0);
  }
  ramdisk_read(buf, file_table[fd].disk_offset + file_table[fd].open_offset, (size_t)READ_LENGTH); //从对应的文件中读内容
  file_table[fd].open_offset = file_table[fd].open_offset + READ_LENGTH; //修改当前文件的读偏移量

  return READ_LENGTH;
}

size_t fs_write(int fd, const void *buf, size_t len) {
//函数入口：文件编号；目的地址；写字节长度
//函数功能：如果文件是STDOUT、STDERR，直接用putch打印出来；其余文件编号的话从目的地址buf写len个字节到ramdisk中。
//函数出口：本次写操作的实际字节长度
  int WRITE_LENGTH = 0; //本次写操作需要写的长度
  if ((file_table[fd].size -file_table[fd].open_offset) > len){
    WRITE_LENGTH = len;
  }
  else {
    WRITE_LENGTH = file_table[fd].size -file_table[fd].open_offset;
  }
  switch(fd) {
    case FD_STDOUT:    
    case FD_STDERR:  //STDOUT和STDERR直接用putch输出
    {
      WRITE_LENGTH = len;
      for(int i = 0; i < len; i++){
        putch(((char*)buf)[i]);
      }
      break;
    }
    case FD_FB:
    {
      fb_write(buf, file_table[fd].disk_offset + file_table[fd].open_offset, WRITE_LENGTH);
      break;
    }
    default:
    {
      if(WRITE_LENGTH > 0){
        ramdisk_write(buf, file_table[fd].disk_offset + file_table[fd].open_offset, WRITE_LENGTH);
        break;
      }
      else{
        assert(0);//写长度出错
      }
    }
  }
  file_table[fd].open_offset = file_table[fd].open_offset + WRITE_LENGTH;

  return WRITE_LENGTH;
}

size_t fs_lseek(int fd, size_t offset, int whence) {
//函数入口：文件编号，文件读写位置偏移量，偏移模式
//函数功能：改变当前文件的读写位置
//函数出口：返回当前读写位置相对于文件开始位置的字节偏移量
  int NEWOFFSET = 0;
  switch(whence) {
    case SEEK_SET:
    {
      NEWOFFSET = offset;
      break;
    }
    case SEEK_CUR:
    {
      NEWOFFSET = file_table[fd].open_offset + offset;
      break;
    }
     case SEEK_END:
    {
      NEWOFFSET = file_table[fd].size + offset;
      break;
    }
    default:
    {
      assert(0);
    }
  }
  if (NEWOFFSET > file_table[fd].size){
    NEWOFFSET = file_table[fd].size;      //当前读写位置的改变不能超过该文件的边界
  }
  file_table[fd].open_offset = NEWOFFSET; //改变当前文件的读写位置
  return NEWOFFSET;
}

size_t fs_offset(int fd) {
//函数入口：文件编号
//函数出口：对应文件在ramdisk中的偏移量
  return file_table[fd].disk_offset;
}
//---------------------------