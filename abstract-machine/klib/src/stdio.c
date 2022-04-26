#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  int i = 0;
  int j = 0;
  int k = 0;
  int d_num= 0;
  char *str = NULL;
  int num[64] = {0};
  while (*fmt != '\0'){
    switch (*fmt){
      case '%':{
        if (*(fmt+1)=='d' || *(fmt+1)=='s'){
          fmt++;
          switch (*fmt){
            case 'd':{
              d_num = va_arg(ap, int);
              if (d_num == 0x10000000){
                out[i++] = '-';
                out[i++] = '2';
                out[i++] = '1';
                out[i++] = '4';
                out[i++] = '7';
                out[i++] = '4';
                out[i++] = '8';
                out[i++] = '3';
                out[i++] = '6';
                out[i++] = '4';
                out[i++] = '8';
                break;
              }
              else if (d_num < 0){
                out[i++] = '-';
                d_num = -1 * d_num;
              }
              j = 0;
              do {
                num[j++] = (d_num % 10) + '0';
                d_num = d_num / 10;
              } while (d_num);
              for (int m = j; m>0; m--){
                out[i++] = num[m-1];
              }
              fmt++;
              break;
            }
            case 's':{
              k = 0;
              str = va_arg(ap, char*);
              while (str[k] != '\0'){
                out[i++] = str[k++];
              }
              fmt++;
              break;
            }
          }
        }
        else{
          break;
        }
      }
      default:{
        out[i++] = *fmt;
        fmt++;
      }
    }
  }
  out[i] = '\0';
  return (i-1);
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) {
  int ret = 0;
  va_list ap;
  va_start(ap, fmt);
  ret = vsprintf(out, fmt, ap);
  va_end(ap);
  return ret;

  panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
