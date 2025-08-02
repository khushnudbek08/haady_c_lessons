/*
✅ 7. Faktorialni hisoblash (while)
Masala: Musbat son kiriting, while orqali faktorialini hisoblang.

Masalan: 5! = 120
*/
#include <stdio.h>

int main() {

  int input;
  int i = 1;
  int result = 1;
  printf("qaysi sonni faktoriali kerak: ");
  scanf("%d", &input);

  while (i <= input) {
    result = result * i;
    i++;
  }
  printf("%d\n", result);

  return 0;
}