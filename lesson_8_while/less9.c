/*
✅ 9. goto bilan tozalash
Masala: Har qanday 3 ta sonni kiriting.
Agar sonlardan biri manfiy bo‘lsa, goto orqali qaytadan boshlang.
Hammasi musbat bo‘lsa, ularning o‘rtacha qiymatini hisoblang.

*/

#include <stdio.h>

int main() {
  int a, b, c;
boshi:
  printf("uchta son kriting: ");
  if (scanf("%d %d %d", &a, &b, &c) != 3) {
    printf("n/a");
    return 1;
  } else {
    if ((a < 0) || (b < 0) || (c < 0)) {
      printf("iltimos musbat son kriting!\n");
      goto boshi;
    } else {
      float avg = (a + b + c) / 3;
      printf("ortacha qiymat: %.2f\n", avg);
    }
  }

  return 0;
}