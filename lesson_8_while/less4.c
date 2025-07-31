// tub sonlar
#include <stdio.h>

int main()
{

    // int count = 0;
    int n = 2;
    while (n <= 100)
    {
        int i = 2;
        int is_prime = 1;

        while (i < n)
        {
            if (n % i == 0)
            {
                is_prime = 0;
                break;
            }
            i++;
        }
        if (is_prime)
        {
            printf("%d\n", n);
        }
        n++;
    }
    printf("\n");

    return 0;
}