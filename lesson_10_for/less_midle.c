// 🔹 O‘RTA DARAJADAGI MASALALAR:
#include <stdio.h>

int main() {

  // 5️⃣ Kvadrat shakl chiqar:
  for (int i = 0; i <= 2; i++) {
    for (int j = 0; j <= 3; j++) {
      printf("*");
    }
    printf("\n");
  }

  printf("\n\n");

  // 6️⃣ Piramida shakl chiqar:
  //   int n = 1;
  for (int i = 0; i <= 5; i++) {
    for (int j = 0; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }

  // 7️⃣ Berilgan sonning faktorialini top (n!):
  int n;
  int sum = 1;
  printf("son kiritng; ");
  scanf("%d", &n);
  for (int i = 1; n >= i; n--) {
    sum = sum * n;
}
printf("siz kiritgan sonning faktoriali %d\n", sum);

  // 8️⃣ 1 dan 100 gacha bo‘lgan tub (prime) sonlarni ekranga chiqar:

  for (int i = 2; i <= 100; i++) {
    // int n = 2;
    int is_prime = 1;
    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        is_prime = 0;
        break;
      }
    }
    if (is_prime) {
      printf("%d is prime.\n", i);
    }
  }
  return 0;
}
