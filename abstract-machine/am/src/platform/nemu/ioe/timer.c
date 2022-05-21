#include <am.h>
#include <nemu.h>

//uint64_t boot_time; //I DO
void __am_timer_init() {
  //boot_time = (((uint64_t)inl(RTC_ADDR + 4)) << 32) | (uint64_t)inl(RTC_ADDR); //I DO
  //boot_time = (uint64_t)inl(RTC_ADDR + 4) * 1000000LL + inl(RTC_ADDR); //I DO
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  //uptime->us = 0;
  uint64_t high_time = (uint64_t)inl(RTC_ADDR + 4) << 32;
  uint64_t low_time = (uint64_t)inl(RTC_ADDR);
  uptime->us = high_time | low_time;
  //uptime->us = ((((uint64_t)inl(RTC_ADDR + 4)) << 32) | (uint64_t)inl(RTC_ADDR)); //I DO
  //uptime->us = (uint64_t)inl(RTC_ADDR + 4) * 1000000LL + inl(RTC_ADDR) - boot_time; //I DO
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
