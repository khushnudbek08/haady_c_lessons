#include <stdio.h>

int main() {
  int day;

  printf("1-7 raqamini kriting: ");
  if (scanf("%d", &day) != 1) {
    printf("iltimos son kriting\n");
    return 1;
  }

  switch (day) {
  case 1:
    printf("Bugun Dushanba\n");
    break;
  case 2:
    printf("Bugun Seyshanba\n");
    break;
  case 3:
    printf("Bugun Chorshanba\n");
    break;
  case 4:
    printf("Bugun Payshanba\n");
    break;
  case 5:
    printf("Bugun Juma\n");
    break;
  case 6:
    printf("Bugun Shanba\n");
    break;
  case 7:
    printf("Bugun Yakshanba\n");
    break;
  default:
    printf("iltimos 1 - 7 orasidagi raqm kiriting\n");
  }

  return 0;
}