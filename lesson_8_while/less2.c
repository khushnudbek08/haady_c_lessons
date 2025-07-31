#include <stdio.h>

// foydalanuvchimusbat son kiritmaguncha son so'rash

int main()
{

    int son;

    do
    {
        printf("musbat son kiriting: ");
        if (scanf("%d", &son) != 1)
        {
            printf("iltimos son kiriting: ");
            return 1;
        }
        printf("Natija = %d\n", son);
    } while (son < 1);

    return 0;
}