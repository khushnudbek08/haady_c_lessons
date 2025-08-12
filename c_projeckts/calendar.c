#include <stdio.h>

#define TRUE 1
#define FALSE 0

int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char *months[] = {"\n\n\nyanvar", "\n\n\nFevral", "\n\n\nMart",
                  "\n\n\nAprel",  "\n\n\nMay",    "\n\n\nIyun",
                  "\n\n\nIyul",   "\n\n\nAvgust", "\n\n\nSentabr",
                  "\n\n\nOktabr", "\n\n\nNoyabr", "\n\n\nDekabr"};

int inputYear(void) {
  int year;
  printf("please enter a year (example: 1999) : ");
  scanf("%d", &year);
  return year;
}

int determineleapyear(int year) {
  if ((year % 4 == FALSE && year % 100 != FALSE) || (year % 400 == FALSE)) {
    daysInMonth[2] = 29;
    return TRUE;
  } else {
    daysInMonth[2] = 28;
    return FALSE;
  }
}

int determinedaycode(int year) {
  int daycode;
  int d1, d2, d3;

  d1 = (year - 1) / 4;
  d2 = (year - 1) / 100;
  d3 = (year - 1) / 400;
  daycode = (year + d1 - d2 + d3) % 7;

  return daycode;
}

void calendar(int year, int daycode) {
  int month, day;
  for (month = 1; month <= 12; month++) {
    printf("%s %d", months[month - 1], year);
    printf("\n\n Ya  Du  Se  Cho Pa  Ju  Sha\n");
    for (day = 1; day <= 1 + daycode * 5; day++) {
      printf(" ");
    }

    // for (int space = 0; space < daycode; space++) {
    //   printf("    ");
    // }

    for (day = 1; day <= daysInMonth[month]; day++) {
      printf(" %2d ", day);

      if ((day + daycode) % 7 == 0) {
        //     printf("   ");
        //   } else {
        printf("\n");
      }
    }
    daycode = (daycode + daysInMonth[month]) % 7;
  }
}

int main() {

  int year, daycode, leapyear;
  year = inputYear();
  daycode = determinedaycode(year);
  determineleapyear(year);
  calendar(year, daycode);
  printf("\n");

  return 0;
}