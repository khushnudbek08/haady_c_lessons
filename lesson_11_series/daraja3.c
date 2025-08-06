#include <stdio.h>

int main() {
  // 8. int a[3][2] massivga qiymatlar berib, ularni jadval ko‘rinishida
  // chiqaring
  int a[3][2] = {1, 2, 3, 4, 5, 6};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }

  //   matrixning dioganal elementini chiqarish
  // 1 0 0
  // 0 2 0
  // 0 0 3
  int b[3][3] = {0};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i + j == 2) {
        printf("%d ", b[i][j] = i + 1);

      } else {
        printf("%d ", b[i][j]);
      }
    }
    printf("\n");
  }

  return 0;
}