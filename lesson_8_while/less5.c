/*
✅ 5. do while bilan taxmin o‘yini
Masala: Kompyuter bir sirli son tanlaydi (masalan, 23). 
Foydalanuvchi to‘g‘ri topmaguncha do while orqali taxmin qiladi. 
Har safar: "Katta", "Kichik" yoki "To‘g‘ri" deb ayting.
*/ 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int sirli_son = rand() % 100 + 1;
    int input;
    int count = 0;

    while (1) {
        count++;
        printf("\niltimos son tanlang: ");
        scanf("%d", &input);
        if (input == sirli_son) {
            printf("qoyil siz to'g'ri topdingiz!\n");
            printf("urinishlar soni %d\n", count);
            break;
        } else if (input > sirli_son) {
            printf("biroz kichikroq son kiitib ko'ringcha balik toparsiz bu safar!\n");
        } else {
            printf("biroz kattaroq son kiritb korarsan balim!\n");
        }

    }

    return 0;
}