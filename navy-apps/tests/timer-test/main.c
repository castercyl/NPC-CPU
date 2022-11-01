//#include <time.h>
#include <stdio.h>
#include <NDL.h>
//#include <NDL.h>



//-----------NDL-time---------------

int main() {
    NDL_Init(0);
    uint32_t ms_ini = 0;
    uint32_t ms_old = 0;
    uint32_t ms_new = 0;
    ms_ini = NDL_GetTicks();
    while(1) {
        ms_new = NDL_GetTicks() - ms_ini;
        //printf("ms_new = %d !\n", ms_new);
        if((ms_new - ms_old) >= 500){
            ms_old = ms_new;
            printf("Time has past 0.5 S !\n");
        }
    }
    return 0;
}

/*
int main() {
    struct timeval val_ini;
    struct timeval val_new;
    _gettimeofday(&val_ini, NULL);
    int us_old = 0;
    int us_new = 0;
    while(1) {
        _gettimeofday(&val_new, NULL);
        us_new = (val_new.tv_sec - val_ini.tv_sec)*1000000 + (val_new.tv_usec - val_ini.tv_usec);
        if((us_new - us_old) >= 500000){
            us_old = us_new;
            printf("Time has past 0.5 S !\n");
        }
    }
    return 0;
}
*/