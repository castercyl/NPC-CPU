#include <am.h>
#include <klib-macros.h>

//#include <stdio.h> //I DO
//----------------I DO---------------------
#define DEVICE_BASE 0xa0000000
#define MMIO_BASE 0xa0000000
#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100)
#define FB_ADDR         (MMIO_BASE   + 0x1000000)
#define SYNC_ADDR (VGACTL_ADDR + 4)

#define AUDIO_ADDR      (DEVICE_BASE + 0x0000200)
#define AUDIO_FREQ_ADDR      (AUDIO_ADDR + 0x00)
#define AUDIO_CHANNELS_ADDR  (AUDIO_ADDR + 0x04)
#define AUDIO_SAMPLES_ADDR   (AUDIO_ADDR + 0x08)
#define AUDIO_SBUF_SIZE_ADDR (AUDIO_ADDR + 0x0c)
#define AUDIO_INIT_ADDR      (AUDIO_ADDR + 0x10)
#define AUDIO_COUNT_ADDR     (AUDIO_ADDR + 0x14)

void __am_audio_init() {
}

void __am_audio_config(AM_AUDIO_CONFIG_T *cfg) {
  cfg->present = false;
}

void __am_audio_ctrl(AM_AUDIO_CTRL_T *ctrl) {
}

void __am_audio_status(AM_AUDIO_STATUS_T *stat) {
  stat->count = 0;
}

void __am_audio_play(AM_AUDIO_PLAY_T *ctl) {
}

void __am_disk_config(AM_DISK_CONFIG_T *cfg) {
  cfg->present = false;
}

void __am_disk_status(AM_DISK_STATUS_T *stat) {
}

void __am_disk_blkio(AM_DISK_BLKIO_T *io) {
}

static inline void outl(uintptr_t addr, uint32_t data) { *(volatile uint32_t *)addr = data; }
static inline uint32_t inl(uintptr_t addr) { return *(volatile uint32_t *)addr; } //I DO

void __am_gpu_init() {         //I DO 照着讲义补全
  int i;
  int w = io_read(AM_GPU_CONFIG).width;  // TODO: get the correct width
  int h = io_read(AM_GPU_CONFIG).height;  // TODO: get the correct height
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  for (i = 0; i < w * h; i ++) fb[i] = i;
  outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  uint32_t info = inl(VGACTL_ADDR);    //I DO
  uint16_t real_height = (uint16_t)(info & 0xFFFF); //I DO
  uint16_t real_width  = (uint16_t)(info >> 16); //I DO
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = real_width, .height = real_height,        //I DO
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int win_weight = io_read(AM_GPU_CONFIG).width;  // TODO: get the correct width

  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  uint32_t *pi = (uint32_t *)(uintptr_t)ctl->pixels;
  // printf("(x:%d, y:%d) w=%d, h=%d", ctl->x, ctl->y, ctl->w, ctl->h);
  for (int i = 0; i < ctl->h; ++i){
    for (int j = 0; j < ctl->w; ++j){
      fb[(ctl->y) * win_weight + i * win_weight + ctl->x + j] = pi[i * (ctl->w) + j];
    }
  }
  
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
//==========================================



void __am_timer_init();

void __am_timer_rtc(AM_TIMER_RTC_T *);
void __am_timer_uptime(AM_TIMER_UPTIME_T *);
void __am_input_keybrd(AM_INPUT_KEYBRD_T *);
//void __am_timer_rtc(AM_TIMER_RTC_T *);

static void __am_timer_config(AM_TIMER_CONFIG_T *cfg) { cfg->present = true; cfg->has_rtc = true; }
static void __am_input_config(AM_INPUT_CONFIG_T *cfg) { cfg->present = true;  }

static void __am_uart_config(AM_UART_CONFIG_T *cfg)   { cfg->present = false; } //I DO
static void __am_net_config (AM_NET_CONFIG_T *cfg)    { cfg->present = false; }

typedef void (*handler_t)(void *buf);
static void *lut[128] = {
  [AM_TIMER_CONFIG] = __am_timer_config,
  [AM_TIMER_RTC   ] = __am_timer_rtc,
  [AM_TIMER_UPTIME] = __am_timer_uptime,
  [AM_INPUT_CONFIG] = __am_input_config,
  [AM_INPUT_KEYBRD] = __am_input_keybrd,
  [AM_GPU_CONFIG  ] = __am_gpu_config,    //I DO
  [AM_GPU_FBDRAW  ] = __am_gpu_fbdraw,    //I DO
  [AM_GPU_STATUS  ] = __am_gpu_status,    //I DO
  [AM_UART_CONFIG ] = __am_uart_config,   //I DO
  [AM_AUDIO_CONFIG] = __am_audio_config,
  [AM_AUDIO_CTRL  ] = __am_audio_ctrl,
  [AM_AUDIO_STATUS] = __am_audio_status,
  [AM_AUDIO_PLAY  ] = __am_audio_play,
  [AM_DISK_CONFIG ] = __am_disk_config,
  [AM_DISK_STATUS ] = __am_disk_status,
  [AM_DISK_BLKIO  ] = __am_disk_blkio,
  [AM_NET_CONFIG  ] = __am_net_config,
};

static void fail(void *buf) { panic("access nonexist register"); }

bool ioe_init() {
  //printf("ioe_init statrt\n");//I DO
  for (int i = 0; i < LENGTH(lut); i++)
    if (!lut[i]) lut[i] = fail;
  __am_gpu_init(); //I DO
  __am_timer_init();
  __am_audio_init();
  //printf("ioe_init finish\n");//I DO
  return true;
}

void ioe_read (int reg, void *buf) { ((handler_t)lut[reg])(buf); }
void ioe_write(int reg, void *buf) { ((handler_t)lut[reg])(buf); }
