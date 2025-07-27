#include <stdio.h>
#include <ctype.h> // bu kutubhona belgilar char turidagi belgilarni nazorat qiladi

int main() {

  char belgi;

  printf("belgini unli yoki undoshligini aniqlaymiz.\nbelgi kiriting: ");
  if (scanf(" %c", &belgi) != 1) {
    printf("iltimos belgi kiriting (a, b, c ...)!\n");
    return 1;
  }

  if (!isalpha(belgi)) {
    printf("ltimos faqat belgi kiriting");
    return 1;
  }

  switch (belgi) {
  case 'a':
  case 'A':
  case 'i':
  case 'I':
  case 'u':
  case 'U':
  case 'e':
  case 'E':
  case 'o':
  case 'O':
    printf("Bu belgi unli\n");
    break;
  default:
    printf("bu belgi unli emas\n");
  }

  return 0;
}