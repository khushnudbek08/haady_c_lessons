#include <stdio.h>

int main() {

  //   // 1. Butun sonlardan iborat massiv elementlarini ekranga chiqarish
  //   int sonlar[5] = {1, 3, 5, 7, 9};
  //   for (int i = 0; i < 5; i++) {
  //     printf("%d ", sonlar[i]);
  //   }

  //   //   2. Foydalanuvchidan massivga 10 ta son kiritib, ularning
  //   yig‘indisini
  //   //   topish
  //   int nums[10];
  //   int sum = 0;
  //   printf("\n10 ta son kiriting: ");
  //   for (int i = 0; i < 10; i++) {
  //     scanf("%d", &nums[i]);
  //   }
  //   int length = sizeof(nums) / sizeof(nums[0]);
  //   for (int i = 0; i < length; i++) {
  //     sum = sum + nums[i];
  //   }
  //   printf("siz kiritgan sonlarning yig'indisi %d ", sum);

  //   3. Eng katta elementni toping
  int a[11] = {4, 9, 2, 10, 1, 45, 52, 7, 8, 8, 26};
  int max = a[0];
  int juft = 0;
  int toq = 0;
  for (int i = 0; i < 11; i++) {
    if (max < a[i])
      max = a[i];
    //   4. Massivda nechta toq va nechta juft son borligini hisoblang
    if (a[i] % 2 == 0) {
      juft++;
    } else {
      toq++;
    }
  }
  printf("max son: %d\njuft sonlar: %d\ntoq sonlar: %d\n", max, juft, toq);
  return 0;
}