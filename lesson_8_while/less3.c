// menu tanlovi!
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int son;
salom:
    system("clear || cls");
    printf("1. Salom deyish\n");
    printf("2. chiqish\n");
    printf("menyudan tanlang: ");
    if (scanf("%d", &son) != 1)
    {
        printf("Iltimos son kriting!\n");
        goto salom;
    }

    switch (son)
    {
    case 1:
        printf("salom senga\n");
        break;
    case 2:
        printf("dastur tugatildi!!!\n");
        return 1;
        break;
    default:
        printf("iltimos mavjud sonlardan birini tanlang\n");
        goto salom;
    }

    return 0;
}
