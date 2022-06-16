#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {     //I DO 未测试
  int ret = 0;
  //char *out = NULL;
  char out[2000] = {0};
  va_list ap;
  va_start(ap, fmt);
  ret = vsprintf(out, fmt, ap);
  va_end(ap);
  for (int i = 0; out[i] != '\0'; i++){
    //putch(*(out + i));
    putch(out[i]);
  }
  return ret;
  panic("Not implemented");
}

// %02d没有解决
int vsprintf(char *out, const char *fmt, va_list ap) {
  /*
  int i = 0;    //输出out的第几位
  int j = 0;
  int k = 0;
  int d_num = 0;
  uint32_t v;
  //int zeropad = 0;
  //int zeropad_size = 0;
  char *str = NULL;
  int num[64] = {0};
  while (*fmt != '\0'){
    //zeropad = 0;
    //zeropad_size = 0;
    switch (*fmt){
      case '%':{
        if (*(fmt+1)=='d' || *(fmt+1)=='s' || *(fmt+1)=='c' || *(fmt+1)=='x'){
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
            case 'x':{
              v = va_arg(ap, uint32_t);
              k = 0;
              out[i++] = '0';
              out[i++] = 'x';
              if (v == 0){
                 out[i++] = '0';
                 fmt++;
                 break;
               }
              while(v != 0){
                 str[k++] =  v % 16 < 10 ? v % 16 + '0' : 'a' + v % 16 - 10;
                 v = v / 16;
               }
              k = k - 1;
              while(k >= 0){
                out[i++] = str[k--];
              }
              fmt++;
              break;
            }
            case 'c':{
              out[i++] = va_arg(ap, int);
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
*/
size_t j = 0, k = 0, i = 0;
  int val, num[64] = {0};
  uint64_t v;
  const char *str;
  char nums[20];
  while (*fmt != '\0')
  {
    switch (*fmt)
    {
    case '%':

      fmt++;
      if (*fmt >= 'a' && *fmt <= 'z')
      {
        switch (*fmt)
        {
        case 'd':
          val = va_arg(ap, int);
          k = 0;
          if (val == 0x80000000)
          {
            out[j++] = '-';
            out[j++] = '2';
            out[j++] = '1';
            out[j++] = '4';
            out[j++] = '7';
            out[j++] = '4';
            out[j++] = '8';
            out[j++] = '3';
            out[j++] = '6';
            out[j++] = '4';
            out[j++] = '8';
            fmt++;
            break;
          }
          else if (val < 0)
          {
            val = (-1) * val;
            out[j++] = '-';
          }
          do
          {
            num[k++] = val % 10 + '0';
            val = val / 10;
          } while (val != 0);
          for (int ii = k - 1; ii >= 0; ii--)
          {
            out[j++] = num[ii];
          }
          fmt++;
          break;
        case 's':
          str = va_arg(ap, char *);
          i = 0;
          while (str[i] != '\0')
          {
            out[j++] = str[i++];
          }
          fmt++;
          break;
        case 'x':
          v = va_arg(ap, uint64_t);
          k = 0;
          out[j++] = '0';
          out[j++] = 'x';
          if (v == 0)
          {
            out[j++] = '0';
            fmt++;
            break;
          }
          while (v != 0)
          {
            nums[k++] = v % 16 < 10 ? v % 16 + '0' : 'a' + v % 16 - 10;
            v = v / 16;
          }
          for (int ii = k - 1; ii >= 0; ii--)
          {
            out[j++] = nums[ii];
          }
          fmt++;
          break;
        case 'p':
          v = va_arg(ap, uint32_t);
          k = 0;
          out[j++] = '0';
          out[j++] = 'x';
          if (v == 0)
          {
            out[j++] = '0';
            fmt++;
            break;
          }
          while (v != 0)
          {
            nums[k++] = v % 16 < 10 ? v % 16 + '0' : 'a' + v % 16 - 10;
            v = v / 16;
          }
          for (int ii = k - 1; ii >= 0; ii--)
          {
            out[j++] = nums[ii];
          }
          fmt++;
          break;
        case 'c':
          out[j++] = va_arg(ap, int);
          fmt++;
          break;
        default:
          assert(0);
          // other fuctions remaining to be realized.
        }
      } //处理标志符及一个字母中间的数
      else
      {
        out[j++] = *fmt;
        fmt++;
      }
      break;
    default:
      out[j++] = *fmt;
      fmt++;
    }
  }
  out[j] = '\0';
  return j;
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
