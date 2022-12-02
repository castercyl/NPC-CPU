#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
//---------I DO---------
//#include <NDL.h>
//#include <fcntl.h>  //I DO
#include <sys/time.h> //I DO
//#include <time.h> //I DO
#include <assert.h>

//int _gettimeofday(struct timeval *tv, struct timezone *tz);
//int gettimeofday (struct timeval *ptimeval, void *ptimezone);
//int _open(const char *path, int flags, mode_t mode);
//int _read(int fd, void *buf, size_t count);
//int _close(int fd);
//off_t _lseek(int fd, off_t offset, int whence);
//int _write(int fd, void *buf, size_t count);
static void NDL_get_key_value(char *str, char *key, int *value);
//-----------------------

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;
static int canvas_w = 0, canvas_h = 0;//I DO 画布尺寸
static int canvas_x = 0, canvas_y = 0;//I DO 画布坐标

uint32_t NDL_GetTicks() {
//------I DO 以毫秒为单位返回系统时间--------------

  struct timeval time_ticks;
  gettimeofday(&time_ticks, NULL); //这里会编译到调用 _gettimeofday( )

  return time_ticks.tv_usec / 1000 + time_ticks.tv_sec * 1000;
  
  /*
  uint32_t time_s = time_ticks.tv_sec;
  uint32_t time_us = time_ticks.tv_usec;
  //uint32_t time_ms = time_s * 1000 + time_us / 1000;
  return time_us / 1000 + time_s * 1000;
  */
  //return time_ms;
  

  //uint32_t time_ms = (time_ticks.tv_sec * 1000 + time_ticks.tv_usec / 1000);

  /*
  uint32_t time_s = time_ticks.tv_sec;
  uint32_t time_us = time_ticks.tv_usec;
  uint32_t time_ms = time_s * 1000 + time_us / 1000;
  */
  //uint32_t time_ms = 10;
//---------------------------------------------

  //return 0;
}

int NDL_PollEvent(char *buf, int len) {
//-----------------I DO-----------------
//-----读取键盘是否按下或松开---------------
  int NDL_fd = open("/dev/events", 0, 0);
  size_t NDL_size = read(NDL_fd, buf, len);
  close(NDL_fd);
  if(NDL_size){
    return 1;
  }
  else{
    return 0;  //因为每次事件都会写入字符，除非是写入量0才是压根就没有读事件
  }
//---------------------------------
  //return 0;
}

void NDL_OpenCanvas(int *w, int *h) {
// 打开一张(*w) X (*h)的画布, 即给画布尺寸赋值
// 如果*w和*h均为0, 则将系统全屏幕作为画布, 并将*w和*h分别设为系统屏幕的大小
//-------------------I DO------------------
  if(*w == 0) {
    *w = screen_w;
  }
  else if(*w > screen_w){//画布尺寸不能超过屏幕尺寸
    assert(0);
  }
  if(*h == 0) {
    *h = screen_h;
  }
  else if(*h > screen_h){
    assert(0);
  }
  canvas_w = *w;
  canvas_h = *h;
//-------------------------------------------

  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }

}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
//-----------------------I DO--------------------------------
// 向画布`(x, y)`坐标处绘制`w*h`的矩形图像, 并将该绘制区域同步到屏幕上
// 图像像素按行优先方式存储在`pixels`中, 每个像素用32位整数以`00RRGGBB`的方式描述颜色
  int draw_fd = open("/dev/fb", 0, 0);
  //int draw_fd = open("/dev/fb", 4);
  printf("canvas_w = %d; canvas_h = %d\n", canvas_w, canvas_h);
  printf("canvas_x = %d; canvas_y = %d\n", canvas_x, canvas_y);

  for (int i = 0; i < h; i++) {
    int open_offset = lseek(draw_fd, (((y + canvas_y + i) * screen_w) + (x + canvas_x)) * sizeof(uint32_t), SEEK_SET); //每次跨行均需重新改变读写位置
    write(draw_fd, pixels + w * i, w * sizeof(uint32_t));
    printf("i=%d, open_offset=%d\n",i,open_offset);
  }

  //close(draw_fd); //不能引入close，否则在navy的native上无法翻页
//-----------------------------------------------------------
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
//----------I DO----------------
//(1)获取屏幕的长和宽
  //把dispinfo中的文本内容读取出来放在proc_info
  char proc_info[128], key[64];
  int key_value;
  int proc_fd = open("/proc/dispinfo", 0, 0);
  read(proc_fd, proc_info, sizeof(proc_info));
  close(proc_fd);
  //以换行符“\n"为分隔符拆解文本信息，找到width和height
  char *token = strtok(proc_info, "\n");
  while(token != NULL) {
    NDL_get_key_value(token, key, &key_value);
    if(strcmp(key, "WIDTH") == 0){
      screen_w = key_value;
    }
    else if (strcmp(key, "HEIGHT") == 0) {
      screen_h = key_value;
    }
    //printf("%s = %d\n", key, key_value);

    token = strtok(NULL, "\n");
  }

  printf("NDL_Init : Screen_width = %d, Screen_height = %d\n", screen_w, screen_h);

//------------------------------
  return 0;
}

void NDL_Quit() {
}

//-----------I DO-----------
static void NDL_get_key_value(char *str, char *key, int *value) {
//把key和key_value分别取出来
  char buffer[128];
  int len = 0;
  for (char *c = str; *c; c++) { //把字符串中的空格符号去掉
    if (*c != ' ') {
      buffer[len++] = *c;
    }
  }
  buffer[len] = '\0';
  sscanf(buffer, "%[a-zA-Z]:%d", key, value);
}
//---------------------------