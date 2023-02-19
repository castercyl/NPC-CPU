#include <NDL.h>
#include <sdl-video.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

#include <stdio.h> //I DO

//-----------I DO----------------
static inline uint32_t clolour8_to_32(SDL_Color *colors) {//按00RRGGBB的方式调色
  return (colors->a << 24 | colors->r << 16 | colors->g << 8 | colors->b);
}
//===============================

void SDL_BlitSurface(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  //printf("run SDL_BlitSurface !\n");//I DO
  assert(dst && src);  //两张画布不能为空
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel); //两张画布的像素格式要一致
//--------------------I DO----------------------------------------
//---------------将一张画布中的指定矩形区域复制到另一张画布的指定位置----------------这里不用考虑32和8？
int src_rect_x, src_rect_y, src_rect_w, src_rect_h, dst_rect_x, dst_rect_y;

if (src->format->BitsPerPixel == 32)
{
  uint32_t *src_pixels_32 = (uint32_t *)src->pixels;
  uint32_t *dst_pixels_32 = (uint32_t *)dst->pixels;
  if (srcrect)
  {
    src_rect_x = srcrect->x;
    src_rect_y = srcrect->y;
    src_rect_w = srcrect->w;
    src_rect_h = srcrect->h;
  }
  else
  {
    src_rect_x = 0;
    src_rect_y = 0;
    src_rect_w = src->w;
    src_rect_h = src->h;
  }
  if (dstrect)
  {
    dst_rect_x = dstrect->x;
    dst_rect_y = dstrect->y;
  }
  else
  {
    dst_rect_x = 0;
    dst_rect_y = 0;
  }

  for (int i = 0; i < src_rect_h; i++)
  {
    for (int j = 0; j < src_rect_w; j++)
    {
      dst_pixels_32[(dst_rect_y + i) * dst->w + dst_rect_x + j] = src_pixels_32[(src_rect_y + i) * src->w + src_rect_x + j];
    }
  }
}

else if (src->format->BitsPerPixel == 8) //默认调色板是一致的
{
  uint8_t *src_pixels_8 = (uint8_t *)src->pixels;
  uint8_t *dst_pixels_8 = (uint8_t *)dst->pixels;
  if (srcrect)
  {
    src_rect_x = srcrect->x;
    src_rect_y = srcrect->y;
    src_rect_w = srcrect->w;
    src_rect_h = srcrect->h;
  }
  else
  {
    src_rect_x = 0;
    src_rect_y = 0;
    src_rect_w = src->w;
    src_rect_h = src->h;
  }
  if (dstrect)
  {
    dst_rect_x = dstrect->x;
    dst_rect_y = dstrect->y;
  }
  else
  {
    dst_rect_x = 0;
    dst_rect_y = 0;
  }

  for (int m = 0; m < src_rect_h; m++)
  {
    for (int n = 0; n < src_rect_w; n++)
    {
      dst_pixels_8[(dst_rect_y + m) * dst->w + dst_rect_x + n] = src_pixels_8[(src_rect_y + m) * src->w + src_rect_x + n];
    }
  }
}

else
{
  assert(0);
}

//================================================================
}

void SDL_FillRect(SDL_Surface *dst, SDL_Rect *dstrect, uint32_t color) {
//-------------I DO----------------------
//------------往画布的指定矩形区域中填充指定的颜色---------- 
  //printf("run SDL_FillRect !\n");//I DO
  int rect_x, rect_y, rect_w, rect_h; //目标矩形的起点，长，宽
  if(dstrect == NULL)   //如没有指定区域，则默认填充整个画布
  {
    rect_x = 0;
    rect_y = 0;
    rect_w = dst->w;
    rect_h = dst->h;
  }
  else
  {
    rect_x = dstrect->x;
    rect_y = dstrect->y;
    rect_w = dstrect->w;
    rect_h = dstrect->h;
  }
  uint32_t *rect_pixels = (uint32_t *)dst->pixels;
  for(int i = 0; i < rect_h; i++)
  {
    for(int j = 0; j < rect_w; j++)
    {
      rect_pixels[(rect_y + i) * dst->w + rect_x + j] = color;
    }
  }
//======================================================
}

void SDL_UpdateRect(SDL_Surface *s, int x, int y, int w, int h) {
//---------------------I DO--------------------
//将画布中的(x,y)点处的w*h的矩形区域同步到屏幕上
  if (s->format->BitsPerPixel == 32) //每个像素是32位,24位以上直接存值
  {
    if (x==0 && y==0 && w==0 && h==0) 
    { //如果x,y,w,h均为0，则改为更新到整个画布
      NDL_DrawRect((uint32_t *)s->pixels, 0, 0, s->w, s->h);
      return;
    }
    //指定矩形小于画布的总体内容，需要将指定部分的内容切取出来
    uint32_t *SDL_pixels_32 = malloc(w * h * sizeof(uint32_t));
    assert(SDL_pixels_32);
    uint32_t *surface_src_32 = (uint32_t *)s->pixels;
    for (int i = 0; i < h; i++)
    { //按行优先排列
      memcpy(SDL_pixels_32 + i * w, surface_src_32 + (i + y) * s->w + x, w * sizeof(uint32_t));
    }
    NDL_DrawRect((uint32_t *)SDL_pixels_32, x, y, w, h);
    free(SDL_pixels_32);
  }

  else if (s->format->BitsPerPixel == 8) //每个像素是8位，但自己实现的NDL_DrawRect只支持32位，需要转换下
  //24位以下存储的是调色索引
  {
    if (x==0 && y==0 && w==0 && h==0)
    {
      w = s->w; h = s->h;
    }
    uint32_t *SDL_pixels_8_to_32 = malloc(w * h * sizeof(uint32_t));
    assert(SDL_pixels_8_to_32);
    uint8_t *surface_src_8 = (uint8_t *)s->pixels;
    for (int i = 0; i < h; i++)
    {
      for (int j = 0; j < w; j++)
      {
        SDL_pixels_8_to_32[i * w + j] = clolour8_to_32(&s->format->palette->colors[surface_src_8[(y + i)*s->w+x+j]]);
      }
    }
    NDL_DrawRect(SDL_pixels_8_to_32, x, y, w, h);
    free(SDL_pixels_8_to_32);

  }
  else
  {
    assert(0);
  }
//=============================================
}

// APIs below are already implemented.

static inline int maskToShift(uint32_t mask) {
  switch (mask) {
    case 0x000000ff: return 0;
    case 0x0000ff00: return 8;
    case 0x00ff0000: return 16;
    case 0xff000000: return 24;
    case 0x00000000: return 24; // hack
    default: assert(0);
  }
}

SDL_Surface* SDL_CreateRGBSurface(uint32_t flags, int width, int height, int depth,
    uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  //printf("run SDL_CreateRGBSurface !\n");//I DO
  assert(depth == 8 || depth == 32);
  SDL_Surface *s = malloc(sizeof(SDL_Surface));
  assert(s);
  s->flags = flags;
  s->format = malloc(sizeof(SDL_PixelFormat));
  assert(s->format);
  if (depth == 8) {
    s->format->palette = malloc(sizeof(SDL_Palette));
    assert(s->format->palette);
    s->format->palette->colors = malloc(sizeof(SDL_Color) * 256);
    assert(s->format->palette->colors);
    memset(s->format->palette->colors, 0, sizeof(SDL_Color) * 256);
    s->format->palette->ncolors = 256;
  } else {
    s->format->palette = NULL;
    s->format->Rmask = Rmask; s->format->Rshift = maskToShift(Rmask); s->format->Rloss = 0;
    s->format->Gmask = Gmask; s->format->Gshift = maskToShift(Gmask); s->format->Gloss = 0;
    s->format->Bmask = Bmask; s->format->Bshift = maskToShift(Bmask); s->format->Bloss = 0;
    s->format->Amask = Amask; s->format->Ashift = maskToShift(Amask); s->format->Aloss = 0;
  }

  s->format->BitsPerPixel = depth;
  s->format->BytesPerPixel = depth / 8;

  s->w = width;
  s->h = height;
  s->pitch = width * depth / 8;
  assert(s->pitch == width * s->format->BytesPerPixel);

  if (!(flags & SDL_PREALLOC)) {
    s->pixels = malloc(s->pitch * height);
    assert(s->pixels);
  }

  //printf("finish SDL_CreateRGBSurface !\n");//I DO

  return s;
}

SDL_Surface* SDL_CreateRGBSurfaceFrom(void *pixels, int width, int height, int depth,
    int pitch, uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask) {
  SDL_Surface *s = SDL_CreateRGBSurface(SDL_PREALLOC, width, height, depth,
      Rmask, Gmask, Bmask, Amask);
  assert(pitch == s->pitch);
  s->pixels = pixels;
  return s;
}

void SDL_FreeSurface(SDL_Surface *s) {
  //printf("run SDL_FreeSurface !\n");//I DO
  if (s != NULL) {
    if (s->format != NULL) {
      if (s->format->palette != NULL) {
        if (s->format->palette->colors != NULL) free(s->format->palette->colors);
        free(s->format->palette);
      }
      free(s->format);
    }
    if (s->pixels != NULL && !(s->flags & SDL_PREALLOC)) free(s->pixels);
    free(s);
  }
  //printf("finish SDL_FreeSurface !\n");//I DO
}

SDL_Surface* SDL_SetVideoMode(int width, int height, int bpp, uint32_t flags) {
  //printf("run SDL_SetVideoMode!\n");//I DO
  if (flags & SDL_HWSURFACE) NDL_OpenCanvas(&width, &height);
  //printf("run SDL_SetVideoMode 1!\n");//I DO
  return SDL_CreateRGBSurface(flags, width, height, bpp,
      DEFAULT_RMASK, DEFAULT_GMASK, DEFAULT_BMASK, DEFAULT_AMASK);
}

void SDL_SoftStretch(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect) {
  assert(src && dst);
  assert(dst->format->BitsPerPixel == src->format->BitsPerPixel);
  assert(dst->format->BitsPerPixel == 8);

  int x = (srcrect == NULL ? 0 : srcrect->x);
  int y = (srcrect == NULL ? 0 : srcrect->y);
  int w = (srcrect == NULL ? src->w : srcrect->w);
  int h = (srcrect == NULL ? src->h : srcrect->h);

  assert(dstrect);
  if(w == dstrect->w && h == dstrect->h) {
    /* The source rectangle and the destination rectangle
     * are of the same size. If that is the case, there
     * is no need to stretch, just copy. */
    SDL_Rect rect;
    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;
    SDL_BlitSurface(src, &rect, dst, dstrect);
  }
  else {
    assert(0);
  }
}

void SDL_SetPalette(SDL_Surface *s, int flags, SDL_Color *colors, int firstcolor, int ncolors) {
  assert(s);
  assert(s->format);
  assert(s->format->palette);
  assert(firstcolor == 0);

  s->format->palette->ncolors = ncolors;
  memcpy(s->format->palette->colors, colors, sizeof(SDL_Color) * ncolors);

  if(s->flags & SDL_HWSURFACE) {
    assert(ncolors == 256);
    for (int i = 0; i < ncolors; i ++) {
      uint8_t r = colors[i].r;
      uint8_t g = colors[i].g;
      uint8_t b = colors[i].b;
    }
    SDL_UpdateRect(s, 0, 0, 0, 0);
  }
}

static void ConvertPixelsARGB_ABGR(void *dst, void *src, int len) {
  int i;
  uint8_t (*pdst)[4] = dst;
  uint8_t (*psrc)[4] = src;
  union {
    uint8_t val8[4];
    uint32_t val32;
  } tmp;
  int first = len & ~0xf;
  for (i = 0; i < first; i += 16) {
#define macro(i) \
    tmp.val32 = *((uint32_t *)psrc[i]); \
    *((uint32_t *)pdst[i]) = tmp.val32; \
    pdst[i][0] = tmp.val8[2]; \
    pdst[i][2] = tmp.val8[0];

    macro(i + 0); macro(i + 1); macro(i + 2); macro(i + 3);
    macro(i + 4); macro(i + 5); macro(i + 6); macro(i + 7);
    macro(i + 8); macro(i + 9); macro(i +10); macro(i +11);
    macro(i +12); macro(i +13); macro(i +14); macro(i +15);
  }

  for (; i < len; i ++) {
    macro(i);
  }
}

SDL_Surface *SDL_ConvertSurface(SDL_Surface *src, SDL_PixelFormat *fmt, uint32_t flags) {
  assert(src->format->BitsPerPixel == 32);
  assert(src->w * src->format->BytesPerPixel == src->pitch);
  assert(src->format->BitsPerPixel == fmt->BitsPerPixel);

  SDL_Surface* ret = SDL_CreateRGBSurface(flags, src->w, src->h, fmt->BitsPerPixel,
    fmt->Rmask, fmt->Gmask, fmt->Bmask, fmt->Amask);

  assert(fmt->Gmask == src->format->Gmask);
  assert(fmt->Amask == 0 || src->format->Amask == 0 || (fmt->Amask == src->format->Amask));
  ConvertPixelsARGB_ABGR(ret->pixels, src->pixels, src->w * src->h);

  return ret;
}

uint32_t SDL_MapRGBA(SDL_PixelFormat *fmt, uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
  assert(fmt->BytesPerPixel == 4);
  uint32_t p = (r << fmt->Rshift) | (g << fmt->Gshift) | (b << fmt->Bshift);
  if (fmt->Amask) p |= (a << fmt->Ashift);
  return p;
}

int SDL_LockSurface(SDL_Surface *s) {
  assert(0);//I DO
  printf("SDL_LockSurface is uncompleted !\n");//I DO
  return 0;
}

void SDL_UnlockSurface(SDL_Surface *s) {
  assert(0);//I DO
  printf("SDL_LockSurface is uncompleted !\n");//I DO
}