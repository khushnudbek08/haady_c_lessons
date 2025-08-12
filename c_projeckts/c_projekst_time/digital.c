#include <stdio.h>  
#include <time.h> // time_t uchun
#include <stdlib.h> // systm() uchun
#include <unistd.h> // sleep() uchun

int main() {

  time_t s, val = 1;

  struct tm *current_time;

  while (1) {
    s = time(NULL);
    current_time = localtime(&s);
    system("clear");

    printf("%02d : %02d : %02d", current_time->tm_hour, current_time->tm_min,
           current_time->tm_sec);
    fflush(stdout);
    sleep(1);
  }
  return 0;
}