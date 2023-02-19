#include <am.h>

#define KEYDOWN_MASK 0x8000 //I DO
# define DEVICE_BASE 0xa0000000 //I DO
#define KBD_ADDR        (DEVICE_BASE + 0x0000060) //I DO

static inline uint32_t inl(uintptr_t addr) { return *(volatile uint32_t *)addr; } //I DO

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) { //I DO
  //kbd->keydown = 0;
  //kbd->keycode = AM_KEY_NONE;
  uint32_t scancode = inl(KBD_ADDR);
  kbd->keydown = (scancode & KEYDOWN_MASK) ? true : false;     //scancode的第16位是判断是否按下的标志
  kbd->keycode = scancode & ~KEYDOWN_MASK;
}
