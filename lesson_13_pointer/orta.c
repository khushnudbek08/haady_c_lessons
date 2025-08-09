#include <stdio.h>

// arraydagi harbir sonni 2 ga ko'paytradi
void duble_arr(int *arr, int size) {
  for (int i = 0; i < size; i++) {
    *(arr + i) *= 2;
    printf("%d.\n", *(arr + i));
  }
}

// arraydan maximal qiymatni topib qaytaradi
void max(int *arr, int size) {
  int bosh = *arr;
  for (int i = 0; i < size; i++) {
    if (bosh < *(arr + i)) {
      bosh = *(arr + i);
    }
  }
  printf("eng katta element: %d\n", bosh);
}

int main() {

  int sonlar[] = {2, 5, 8, 5, 3, 12, 56, 42, 7};
  int length = sizeof(sonlar) / sizeof(int);
//   duble_arr(sonlar, length);
  max(sonlar, length);

  return 0;
}