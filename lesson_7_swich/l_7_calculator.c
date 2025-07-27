#include <stdio.h>

int main() {
  int num1, num2, result;
  char operator;

  printf("birinchi raqamni kriting: ");
  scanf("%d", &num1);
  printf("ikkinchi raqamni kirgazing: ");
  scanf("%d", &num2);

  printf("operatorni kriting (+, -, *, /): ");
  scanf(" %c", &operator);

  switch (operator) {
  case '+':
    result = num1 + num2;
    printf("Natija: %d + %d = %d\n", num1, num2, result);
    break;
  case '-':
    result = num1 - num2;
    printf("Natija: %d - %d = %d\n", num1, num2, result);
    break;
  case '*':
    result = num1 * num2;
    printf("Natija: %d * %d = %d\n", num1, num2, result);
    break;
  case '/':
    if (num2 != 0) {
      result = num1 / num2;
      printf("Natija: %d / %d = %d\n", num1, num2, result);
    } else {
      printf("Nolga bo'lish mumkin emas.\n");
    }
    break;
  default:
    printf("Noto'g'ri operator.\n");
  }

  return 0;
}