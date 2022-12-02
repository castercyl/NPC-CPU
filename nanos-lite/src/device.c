#include <common.h>
//#include <sys/time.h> //I DO
//#include <time.h> //I DO

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

//char dispinfo[] = {};//I DO
int fs_gettimeofday( ); //I DO

size_t serial_write(const void *buf, size_t offset, size_t len) {
//由于输出到串口是流动的，没有位置概念，所以忽略offset参数
//-----------I DO-------------------
//把写入的信息直接通过串口打印出来
  for(int i = 0; i < len; i++){
    putch(((char*)buf)[i]);
    }
  return len;
//----------------------------------
  //return 0;
}

size_t events_read(void *buf, size_t offset, size_t len) {
//-----------------I DO--------------------
//把键盘的按键信息以文本的形式写入到buf中
  //暂时忽略offset

  AM_INPUT_KEYBRD_T event_kbd = io_read(AM_INPUT_KEYBRD);  //一次取两个参数，不能取两次！
  //len = 0;
  if(event_kbd.keycode != AM_KEY_NONE){//此时有按键按下或松开
    if(event_kbd.keydown){
      len = sprintf(buf, "kd %s\n", keyname[event_kbd.keycode]);//sprintf返回字符的个数
    }
    else{
      len = sprintf(buf, "ku %s\n", keyname[event_kbd.keycode]);
    }
    
    return len;
  }
  else
  {
    return 0;  //没有有效按键的话返回0；
  }
  /*
  else{
    len = sprintf(buf, "t  %d\n", fs_gettimeofday()); //us
  }
  */
//-----------------------------------------
  //return 0;
}

//static char dispinfo[128] __attribute__((used)) = {};//I DO不太确定

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
//---------------I DO--------------------------
//把从AM中读出的屏幕参数按照dispinfo文本的格式写入目的地址
  //offset 暂时没用上,不支持lseek
  AM_GPU_CONFIG_T gpu_cfg = io_read(AM_GPU_CONFIG);
  int ret = sprintf(buf, "WIDTH  : %d\nHEIGHT : %d", gpu_cfg.width, gpu_cfg.height);
  
  assert(ret < len); //这里的len为自己准备的buf的容量

  Log("dispinfo_read : %s", (char *)buf); //看一下正确性

  //memcpy(buf, dispinfo + offset, len);   //offset = diskoffset + openoffset,但是文件dispinfo的diskoffset=0!
  return ret;
//---------------------------------------------
  //return 0;
}

size_t fb_write(const void *buf, size_t offset, size_t len) {
//---------------I DO-----------------
//把buf中的len字节写到屏幕上(调用IOE)
  AM_GPU_CONFIG_T fb_cfg = io_read(AM_GPU_CONFIG);
  //---------根据offset计算绘画坐标---------------
  size_t pixel_number = offset / sizeof(uint32_t);
  int fb_x = pixel_number % fb_cfg.width;
  int fb_y = pixel_number / fb_cfg.width;
  //===========================================
  uintptr_t *ptr;
  ptr = (uintptr_t *)(&buf);
  io_write(AM_GPU_FBDRAW, fb_x, fb_y, (void*)*ptr, len/sizeof(uint32_t), 1, true); //画出高度为1的矩形
  return len;
//------------------------------------
  //return 0;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
//------------I DO---------------
  //AM_GPU_CONFIG_T gpu_cfg = io_read(AM_GPU_CONFIG);
  //sprintf(dispinfo, "WIDTH  : %d\nHEIGHT : %d", gpu_cfg.width, gpu_cfg.height);
//-------------------------------
}

/*
//---------------I DO---------------------------------------
int fs_gettimeofday( ) {
  //tv->tv_sec = io_read(AM_TIMER_UPTIME).us / 1000000; //见AM读系统时间部分的讲义
  //tv->tv_usec = io_read(AM_TIMER_UPTIME).us % 1000000;
  int sys_us = io_read(AM_TIMER_UPTIME).us;
  return sys_us;

}
//------------------------------------------------------
*/