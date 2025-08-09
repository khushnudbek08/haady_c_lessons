#include <stdio.h>
#include <string.h>

int main() {

  char gap[11];
  char rev[11];
  int j = 0;
  char belgi = 'a';
  int count = 0;

  fgets(gap, sizeof(gap), stdin);

  //   6. Belgilar sonini hisoblang (null terminatorni hisoblamasdan)
  int length = strlen(gap);
  
  //   5. char belgi[10] ga matn kiritib, uni teskari chiqarish
  for (int i = length - 1; i >= 0; i--) {
    if (gap[i] == '\n')
      continue;

    rev[j] = gap[i];
    // 7. Foydalanuvchidan string olib, unda nechta a harfi borligini sanang
    if (rev[j] == belgi)
      count++;
    j++;
  }
  rev[j] = '\0';
  printf("teskari o'qilishi: %s", rev);
  printf("\nso'z %d ta belgidan iborat\n", length - 1);
  printf("bu so'zda %d ta '%c' bor\n", count, belgi);

  return 0;
}