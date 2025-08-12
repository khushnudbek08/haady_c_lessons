#include <stdio.h>  //input output amallar uchun
#include <stdlib.h>  
#include <time.h>  // vaqtbilan ishlash uchun ishlatiladi
#include <unistd.h>

int main() {

  int hour, min, sec; //vaqt qiymatlarini saqlash uchun o'zgaruvchilar 
  hour = min = sec = 0; //vaqtni qiymatini 0 ga tenglamoqdamiz
  while (1) {
    system("clear"); //terminal ekranini har sikil aylanganda tozalab turadi
    printf("%02d : %02d : %02d\n", hour, min, sec); //vaqtni chop etish

    fflush(stdout);
    sec++; //secund oshirilyapti

    if (sec == 60) { //secund tekshirish
      min += 1;
      sec = 0;
    }
    if (min == 60) {//minutni tekshirish
      hour += 1;
      min = 0;
    }
    if (hour == 24) { //soatni tekshirish
      hour = 0;
      min = 0;
      sec = 0;
    }
    sleep(1); // bir sekund kutish
  }

  return 0;
}