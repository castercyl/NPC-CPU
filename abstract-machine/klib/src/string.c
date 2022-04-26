#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  panic("Not implemented");
}

char *strcpy(char *dst, const char *src) {
  char *tmp = dst;
  //assert((dst != NULL) && (src != NULL));
  while (*src != '\0') {
    *tmp = *src;
    tmp++;
    src++;
  }
  *tmp = '\0';
  return dst;
  panic("Not implemented");
}

char *strncpy(char *dst, const char *src, size_t n) {
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  char *tmp = dst;
  while (*tmp != '\0') {
    tmp++;
  }
  //*tmp = *src;
  while (*src != '\0') {
    *tmp = *src;
    tmp ++;
    src ++;
  }
  *tmp = '\0';
  return dst;
  panic("Not implemented");
}

int strcmp(const char *s1, const char *s2) {
  while ((*s1 != '\0') && (*s1 == *s2)) {
    s1++;
    s2++;
  }
  return *s1 - *s2;
  panic("Not implemented");
}

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) {
  char *tmp = s;
  char tmp_c = c;
  while (n--) {
    *tmp = tmp_c;
    tmp++;
  }
  return s;
  panic("Not implemented");
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  int result = 0;
  const char *p1 = s1;
  const char *p2 = s2;
  while (n--) {
    result = *p1 - *p2;
    if (*p1 == *p2){
      break;
    }
    p1++;
    p2++;
  }
  return result;
  panic("Not implemented");
}

#endif
