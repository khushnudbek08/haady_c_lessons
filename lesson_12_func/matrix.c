#include <stdio.h>

void input_matrix(int matrix[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d qator %d ustunni kiriting: ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }
}
void print_matrix(int matrix[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}
void add_matrix(int a[3][3], int b[3][3], int result[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      result[i][j] = a[i][j] + b[i][j];
    }
  }
}
void subtract_matrix(int a[3][3], int b[3][3], int result[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      result[i][j] = a[i][j] - b[i][j];
    }
  }
}

void scalar_multiply(int matrix[3][3], int scalar, int result[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      result[i][j] = matrix[i][j] * scalar;
    }
  }
}
void transpose_matrix(int matrix[3][3], int result[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      result[j][i] = matrix[i][j];
    }
  }
}

int main() {

  int A[3][3], B[3][3], R[3][3];
  int choice, scalar;

  printf("\nMatrix A\n");
  input_matrix(A);

  printf("\nMatrix B\n");
  input_matrix(B);

  while (choice != 0) {
    printf("\nChoice Option\n");
    printf("1. A + B\n");
    printf("2. A - B\n");
    printf("3. A * scalar\n");
    printf("4. Transpose of A\n");
    printf("0. Exit");
    printf("Enter choice:\n");
    scanf("%d", &choice);

    switch (choice) {
    case 0:
      break;
      break;
    case 1:
      add_matrix(A, B, R);
      printf("Result: A + B\n");
      print_matrix(R);
      break;

    case 2:
      subtract_matrix(A, B, R);
      printf("Result A - B\n");
      print_matrix(R);
      break;

    case 3:
      printf("Enter scalar: ");
      scanf("%d", &scalar);
      scalar_multiply(A, scalar, R);
      printf("Result (A * %d)\n", scalar);
      print_matrix(R);
      break;

    case 4:
      transpose_matrix(A, R);
      printf("Transpose of A:\n");
      print_matrix(R);
      break;
    default:
      printf("Invalid choice");
    }
  }

  return 0;
}