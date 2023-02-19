#include <NDL.h>
#include <stdio.h> //I DO
#include <assert.h> //I DO

int SDL_Init(uint32_t flags) {
  //printf("run SDL_Init !\n");//I DO
  return NDL_Init(flags);
}

void SDL_Quit() {
  printf("run SDL_Quit !\n");//I DO
  NDL_Quit();
}

char *SDL_GetError() {
  assert(0);//I DO
  return "Navy does not support SDL_GetError()";
}

int SDL_SetError(const char* fmt, ...) {
  assert(0);//I DO
  printf("SDL_SetError Not implemented !\n");//I DO
  return -1;
}

int SDL_ShowCursor(int toggle) {
  assert(0);//I DO
  printf("SDL_ShowCursor Not implemented !\n");//I DO
  return 0;
}

void SDL_WM_SetCaption(const char *title, const char *icon) {
  //assert(0);//I DO
  printf("SDL_WM_SetCaption Not implemented !\n");//I DO
}
