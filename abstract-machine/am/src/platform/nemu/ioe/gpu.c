#include <am.h>
#include <nemu.h>
//#include <string.h>  // I DO

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {         //I DO 照着讲义补全
  int i;
  int w = 400;  // TODO: get the correct width     I DO
  int h = 300;  // TODO: get the correct height    I DO
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i ++) fb[i] = i;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = 400, .height = 300,        //I DO
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  //I DO
  int x = ctl->x;
  int y = ctl->y;
  int w = ctl->w;
  int h = ctl->h; //I DO
  if (w == 0 || h == 0) return;     // I DO
  uint32_t *fb1 = (uint32_t *)(uintptr_t)FB_ADDR; // I DO
  uint32_t *pixels_addr = ctl->pixels;
  int cp_bytes = (w < (400 - x)) ? w : 400 - x; //I DO 一行所需的大小
  for (int j=0; j<300 && j<h; j++){
    for (int i=0; i<cp_bytes; i++){        //按行写入
      fb1[(y+j)*400+x+i] = *(pixels_addr+i);
    }
    pixels_addr = pixels_addr + cp_bytes;
  }
  //I DO
  
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
