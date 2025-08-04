// 🔹 BOSHLANG‘I DARAJADAGI MASALALAR:

#include <stdio.h>

int main() {
  int i;
  int n;
  int sum = 0;
  int mid = 0;
  // 1️⃣ 1 dan 10 gacha bo‘lgan sonlarni ekranga chiqar:
  for (i = 1; i <= 100; i++) {
    printf("%d ", i);
  }
  printf("\n\n");
  // 2️⃣ 1 dan 100 gacha juft sonlarni ekranga chiqar:
  for (i = 0; i <= 100; i++) {
    if (i % 2 == 0) {
      printf("%d ", i);
    }
  }
  printf("\n\n");
  // 3️⃣ N soni berilgan. 1 dan N gacha bo‘lgan sonlar yig'indisini top:
  printf("necchigacha bo'lgan sonlarni yig'indisi kerak: ");
  scanf("%d", &n);
  for (i = 0; i <= n; i++) {
    sum += i;
  }
  printf("yig'indi: %d ga teng.\n", sum);
  
  // 4️⃣ Foydalanuvchi kiritgan N ta sonning o‘rtacha qiymatini top:
  
  printf("o'rtacha son teng %d ga.\n", sum / n);
  return 0;
}
