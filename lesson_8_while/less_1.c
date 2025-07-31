#include <stdio.h>

int main() {


    int son;
    int yigindi = 0;
    int start = 1;

    printf("son kiriting: ");
    if (scanf("%d", &son) != 1) {
        printf("iltimos son kiriting!");
        return 1;
    }

    while (start <= son) {
        yigindi += start + son;
        start ++;
        son --;

    }
    printf("%d", yigindi);






    return 0;
}