#include <proc.h>
#include <elf.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

//#define DEFAULT_ENTRY ((void *)0x83000000)    //I DO
size_t get_ramdisk_size();//I DO
size_t ramdisk_read(void *buf, size_t offset, size_t len);//I DO
//uint8_t* guest_to_host(paddr_t paddr);//I DO

//------I DO---------
int fs_open(const char *pathname, int flags, int mode);
size_t fs_read(int fd, void *buf, size_t len);
int fs_close(int fd);
size_t fs_offset(int fd);
//------------------

static uintptr_t loader(PCB *pcb, const char *filename) {
  //TODO();
  //return 0;

//---------------------I DO----------------------
  //函数入口：输入文件名，根据文件名从ramdisk中加载对应文件，返回加载文件的函数入口地址
  Elf_Ehdr elfhdr = {};   //管理整个ELF文件的表头
  Elf_Phdr elfphdr = {};  //管理单个segment信息的表头
  int FS_NUMBER = 0;      //文件编号

  FS_NUMBER = fs_open(filename, 0, 0);
  size_t file_offset = fs_offset(FS_NUMBER);
  printf("FS_NUMBER = %d\n", FS_NUMBER);
  fs_read(FS_NUMBER, &elfhdr, sizeof(elfhdr));
  fs_close(FS_NUMBER);

  printf("sizeof_phdr = %d; ehdr_phentsize = %d\n", sizeof(elfphdr), elfhdr.e_phentsize);

  //ramdisk_read(&elfhdr, 0, sizeof(elfhdr));
  assert(*(uint32_t *)elfhdr.e_ident == 0x464c457f); //ELF文件的魔数断言
  uint16_t i = 0;
  for(i=0; i<elfhdr.e_phnum; i++){
    //uint64_t phoff = elfhdr.e_phoff + elfhdr.e_phentsize * i;
    uint64_t phoff = elfhdr.e_phoff + elfhdr.e_phentsize * i + file_offset;
    //printf("phoff:%x\n",phoff);
    ramdisk_read(&elfphdr, phoff, elfhdr.e_phentsize);

    if(elfphdr.p_type == PT_LOAD){
      //ramdisk_read((void*)0x83000000, 0, 0x4f88);
      //ramdisk_read((void*)elfphdr.p_paddr, elfphdr.p_offset, elfphdr.p_memsz);
      printf("vaddr = 0X%x; paddr = 0X%x\n", elfphdr.p_vaddr, elfphdr.p_paddr);

      ramdisk_read((void*)elfphdr.p_paddr, elfphdr.p_offset + file_offset, elfphdr.p_memsz);

      printf("11111\n");

      //ramdisk_read((void*)elfphdr.p_paddr, elfphdr.p_offset, (size_t*)elfphdr.p_memsz);
      //memset((void *)(elfphdr.p_vaddr+elfphdr.p_filesz), 0, (elfphdr.p_memsz-elfphdr.p_filesz));
      memset((void *)(elfphdr.p_paddr+elfphdr.p_filesz), 0, (elfphdr.p_memsz-elfphdr.p_filesz));
      
    }
  }
  
  return elfhdr.e_entry;
//-----------------------------------------------

}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

