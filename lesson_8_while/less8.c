/*✅ 8. do while bilan sonlar o‘yini
Masala: Foydalanuvchi son kiritadi.
Har gal: "Juft" yoki "Toq" deb chiqaring.
0 kiritsagina dasturni tugating.*/

#include <stdio.h>

int main() {
  int input;

  while (1) {
    printf("\nraqam kiriting: ");
    scanf("%d", &input);
    if (input == 0) {
      printf("You finished the game!\n");
      break;
    } else {
      if (input % 2 == 0) {
        printf("Juft son\n");
      } else {
        printf("toq son\n");
      }
    }
  }

  return 0;
}