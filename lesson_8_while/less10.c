/*✅ 10. while orqali raqamlarni teskari chiqarish
Masala: Istalgan butun sonni kiriting (masalan, 12345). 
Uni while bilan teskari qilib chiqaring: 54321*/ 


#include <stdio.h>

int main() {
    int son;
    int revSon = 0;
    printf("son kiriting: ");
    scanf("%d", &son);

    while (son) {
        revSon = revSon * 10 +  son % 10;
        son /= 10;

    }
    printf("%d\n", revSon);

    return 0;
}