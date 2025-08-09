#include <stdio.h>

void printPointerInfo(int *p) {
  // bu funsiya poyinter manzili va qiymatini ekranga chiqaradi
  printf("pointer ko'rsatgan joydagi qiymati: %d\n", *p);
  printf("pointer turgan joy: %p\n", p);
}

void swap(int *a, int *b) {
  printf("joriy qiymatlar a: %d, b: %d\n", *a, *b);
  int temp = *a;
  *a = *b;
  *b = temp;
  printf("qiymatlar almashtrildi a; %d, b: %d\n", *a, *b);
}

int main() {
  int son = 28;
  int num = 48;

  printPointerInfo(&son);

  swap(&son, &num);

  return 0;
}