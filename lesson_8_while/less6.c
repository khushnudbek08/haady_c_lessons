/*
✅ 6. goto bilan cheksiz sikl
Masala: Foydalanuvchidan exit deb yozmaguncha matn kiritishni so‘raydigan
goto asosidagi cheksiz sikl yozing.
*/

#include <stdio.h>
#include <string.h>

int main() {

  char matn[1000];
boshlash:
  printf("matin kiriting  ---> chiqish uchun exit deb yozing!\n");
  fgets(matn, 1000, stdin);

  if (strcmp(matn, "exit\n") == 0) {
    printf("Dastur tugadi.\n");
    return 0;
  }
  printf("siz kiritgan matn: %s\n", matn);

  goto boshlash;

  return 0;
}