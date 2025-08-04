// 🔹 CHALLENGE:
#include <stdio.h>

int main() {
  int x = 1, y = 0, z = 1;
  int n = 0;
  // 9️⃣ Multiplikatsiya jadvali chiqaring:

  for (int i = 1; i < 10; i++) {
    for (int j = 1; j < 10; j++) {
      printf("\t%dx%d=%d ", j, i, i * j);
    }
    printf("\n");
  }

  // 10️⃣ Fibonacci sonlar ketma-ketligini chiqar (N ta):
  printf(" n son kiriting; ");
  scanf("%d", &n);
  printf("0 \n");
  for (int i = 1; i <= n; i++) {
    printf("%d \n", x);
    x = y + z;
    y = z;
    z = x;
  }
  return 0;
}
