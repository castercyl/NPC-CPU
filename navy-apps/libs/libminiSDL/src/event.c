#include <NDL.h>
#include <SDL.h>
//---------I DO--------
#include <assert.h>
#include <string.h>
//====================

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

static uint8_t key_state[sizeof(keyname) / sizeof(keyname[0])] = {0}; //按键记录的备份（快照）

//-----------I DO--------------
static char key_buf[64], *keycode, *keyaction;
static int inline SDL_getkey(uint8_t *type, uint8_t *sym) {
//---调用NDL_PollEvent，把按键的状态和按键名称写入SDL_EVENT中,sym是按键的编号
  memset(key_buf, '\0', sizeof(key_buf));
  int ret = NDL_PollEvent(key_buf, sizeof(key_buf));
  if(ret == 0)
  {
    return 0; //没有任何按键按下或松开
  }
  else
  {
    printf("Key: %s\n", key_buf);
  }
  //分两部分拆分，以中间的空格为划分符
  keyaction = key_buf;
  int i = 0;
  for(i = 0; key_buf[i] != ' '; i++){}
  keyaction[i] = '\0';
  keycode = &key_buf[i+1];

  for(int j = 0; keycode[j] != '\0'; j++)
  {
    if(keycode[j] == '\n')
    {
      //key_flag[j] = '\0';
      keycode[j] = '\0';
    }
  }
  //辨识
  if (keyaction[1] == 'd')
  {
    *type = SDL_KEYDOWN;
  }
  else if (keyaction[1] == 'u')
  {
    *type = SDL_KEYUP;
  }
  /*
  else
  {
    assert(0);
  }
  */
  for(int k = 0; k < (sizeof(keyname)/sizeof(char *)); k++)
  {
    if (!strcmp(keycode, keyname[k]))
    {
      *sym = k;
    }
  }

  return ret;
}
//==============================

int SDL_PushEvent(SDL_Event *ev) {
  assert(0);//I DO
  printf("SDL_PushEvent Not implemented !\n");//I DO
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
//--------------I DO---------------
//printf("run SDL_PollEvent !\n");
//----------如果当前没有任何事件，就立即返回;轮询，有事件返回1，无事件返回0------------
  uint8_t type = 0, sym = 0;
  if (SDL_getkey(&type, &sym))
  {
    ev->type = type;
    ev->key.keysym.sym = sym;

    if(type == SDL_KEYDOWN)
    {
      key_state[sym] = 1;
    }
    else if(type == SDL_KEYUP)
    {
      key_state[sym] = 0;
    }
    else
    {
      assert(0);
    }

    return 1;
  }
  else
  {
    return 0;
  }
//=================================
  //return 0;
}

int SDL_WaitEvent(SDL_Event *event) {

//----------I DO------------------
//printf("run SDL_WaitEvent !\n");
//----------等待将键盘按键的信息写入SDL_Event中----------
  uint8_t type = 0, sym = 0;
  while (!SDL_getkey(&type, &sym))
  {
    
  }

  event->type = type;
  event->key.keysym.sym = sym;

  if(type == SDL_KEYDOWN)
    {
      key_state[sym] = 1;
    }
    else if(type == SDL_KEYUP)
    {
      key_state[sym] = 0;
    }
    else
    {
      assert(0);
    }

  printf("event.type = %d; event.sym = %d\n", event->type, event->key.keysym.sym);
//================================

  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  assert(0);//I DO
  printf("SDL_PeepEvent Not implemented !\n");//I DO
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
//----------------I DO---------------------
//返回按键的快照,numkey中存放按键快照中按键的数量
  if(numkeys)
  {
    *numkeys = sizeof(key_state) / sizeof(key_state[0]);
  }
  return key_state;
//=========================================
  //assert(0);//I DO
  printf("SDL_GetKeyState Not implemented !\n");//I DO
  return NULL;
}
