#include <NDL.h>
#include <sdl-timer.h>
#include <stdio.h>

#include <assert.h> //I DO

SDL_TimerID SDL_AddTimer(uint32_t interval, SDL_NewTimerCallback callback, void *param) {
  assert(0);//I DO
  printf("SDL_AddTimer is uncompleted !\n");//I DO
  return NULL;
}

int SDL_RemoveTimer(SDL_TimerID id) {
  assert(0);//I DO
  printf("SDL_RemoveTimer is uncompleted !\n");//I DO
  return 1;
}

uint32_t SDL_GetTicks() {
//----------------I DO-----------------
//printf("run SDL_GetTicks !\n");//I DO
//以毫秒为单位返回系统时间
  return NDL_GetTicks();
//=====================================
  //return 0;
}

void SDL_Delay(uint32_t ms) {
//------------------I DO----------------------
//等待ms时间
  uint32_t time_start = NDL_GetTicks();
  while((NDL_GetTicks() - time_start) <= ms)
  {

  }
  //assert(0);//I DO
  //printf("SDL_Delay is uncompleted !\n");//I DO
//==============================================
}
