#define SDL_malloc  malloc
#define SDL_free    free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"

//#include <stdio.h> //I DO

SDL_Surface* IMG_Load_RW(SDL_RWops *src, int freesrc) {
  printf("IMG_Load_RW Not implemented !\n");//I DO
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  return NULL;
}

SDL_Surface* IMG_Load(const char *filename) {
//------------I DO-----------------
//---------将解码后的像素打包为Surface结构体-------
printf("filename = %s\n", filename);

FILE *img = fopen(filename, "r"); //这个fopen会调用自己写的_open？
assert(img != NULL);
fseek(img, 0, SEEK_END); //当前读指针移动到文件末尾,获得文件大小size
size_t size = ftell(img);

char *img_pixels = malloc(sizeof(char) * size);
printf("img_pixels = 0x%x\n", img_pixels);
assert(img_pixels);
memset(img_pixels, 0, size);

fseek(img, 0, SEEK_SET); //当前读指针移动到文件开头,准备读取整个文件
fread(img_pixels, size, 1, img);

printf("run STBIMG_LoadFromMemory\n");
SDL_Surface *img_surface = STBIMG_LoadFromMemory(img_pixels, size);
printf("finsh STBIMG_LoadFromMemory\n");

free(img_pixels);
fclose(img);

return img_surface;
//=================================

  //return NULL;
}

int IMG_isPNG(SDL_RWops *src) {
  printf("IMG_isPNG Not implemented !\n");//I DO
  return 0;
}

SDL_Surface* IMG_LoadJPG_RW(SDL_RWops *src) {
  printf("IMG_LoadJPG_RW Not implemented !\n");//I DO
  return IMG_Load_RW(src, 0);
}

char *IMG_GetError() {
  return "Navy does not support IMG_GetError()";
}
