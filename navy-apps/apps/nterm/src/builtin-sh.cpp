#include <nterm.h>
#include <stdarg.h>
#include <unistd.h>
#include <SDL.h>

char handle_key(SDL_Event *ev);

static void sh_printf(const char *format, ...) {
  static char buf[256] = {};
  va_list ap;
  va_start(ap, format);
  int len = vsnprintf(buf, 256, format, ap);
  va_end(ap);
  term->write(buf, len);
}

static void sh_banner() {
  sh_printf("Built-in Shell in NTerm (NJU Terminal)\n\n");
}

static void sh_prompt() {
  sh_printf("sh> ");
}

static void sh_handle_cmd(const char *cmd) {
//-----------------I DO----------------------
//内建shell中的命令解析, 目前不支持传输额外的参数, 第一个空格前必须输入正确的命令，且只受理第一个空格前的命令
  char cmd_tmp[256];
  strcpy(cmd_tmp, cmd);
  cmd_tmp[strlen(cmd_tmp) - 1] = '\0'; //去掉字符串末尾的/n

  const char s[2] = " "; //分隔符号暂定为空格
  char *token;

  token = strtok(cmd_tmp, s);


  //execve(token, NULL, NULL);
  execvp(token, NULL);
//===========================================
}

void builtin_sh_run() {
  sh_banner();
  sh_prompt();

  int setenv_ret = setenv("PATH", "/bin", 0); //I DO 设置环境变量
  assert(setenv_ret == 0); //I DO

  while (1) {
    SDL_Event ev;
    if (SDL_PollEvent(&ev)) {
      if (ev.type == SDL_KEYUP || ev.type == SDL_KEYDOWN) {
        const char *res = term->keypress(handle_key(&ev));
        if (res) {
          sh_handle_cmd(res);
          sh_prompt();
        }
      }
    }
    refresh_terminal();
  }
}
