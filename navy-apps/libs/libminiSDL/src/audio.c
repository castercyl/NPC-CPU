#include <NDL.h>
#include <SDL.h>

#include <assert.h> //I DO

int SDL_OpenAudio(SDL_AudioSpec *desired, SDL_AudioSpec *obtained) {
  //assert(0);//I DO
  printf("SDL_OpenAudio Not implemented !\n");//I DO
  return 0;
}

void SDL_CloseAudio() {
  //assert(0);//I DO
}

void SDL_PauseAudio(int pause_on) {
  //assert(0);//I DO
}

void SDL_MixAudio(uint8_t *dst, uint8_t *src, uint32_t len, int volume) {
  //assert(0);//I DO
}

SDL_AudioSpec *SDL_LoadWAV(const char *file, SDL_AudioSpec *spec, uint8_t **audio_buf, uint32_t *audio_len) {
  //assert(0);//I DO
  return NULL;
}

void SDL_FreeWAV(uint8_t *audio_buf) {
  //assert(0);//I DO
}

void SDL_LockAudio() {
  //assert(0);//I DO
}

void SDL_UnlockAudio() {
  //assert(0);//I DO
}