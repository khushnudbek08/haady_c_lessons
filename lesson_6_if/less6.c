#include <stdio.h>

int main() {


//  // musbat manfiyni top

//     int a;
//     printf("son kriting: ");
//     if (scanf("%d", &a) !=1) {
//         printf("iltimos son kriting\n");
//     } else if ( a < 0) {
//         printf(" siz busbat son kritdingiz\n");
//     } else if ( a > 0) {
//         printf("siz manfiy son kiritgingiz\n");
//     } else {printf("siz 0 sonini kiritdingiz\n");}



// // eng kattasini top
    // int b, c, d;
    // printf(" 3ta son kiriting\n ");
    // if (scanf("%d %d %d", &b, &c, &d) != 3) {
    //     printf("n/a\n");
    // }

    // int max = b;
    // if (c > max) {max = c;}
    // if (d > max) { max = d;}
   
    // printf("%d", max);
   


// //    toq yoki juft

//     int i;
//     printf("son kriting\n");
//     if (scanf("%d", &i) != 1 ) {
//         printf("n/a\n");
//     }

//     if (i % 2 == 0) {
//         printf("siz juft son kiritingiz");
//     } else {printf("siz toq son krittingiz");}
   

// // bahoni harfga aylantrish

//     int ball;
//     printf("balingizni kiriting: ");
//     scanf("%d", &ball);

//     if (ball >= 100 || ball >= 90) {
//         printf("sizning bahoyingiz A");
//     } else if (ball >= 89 || ball >= 80) {
//         printf("sizning bahoyingiz B");
//     } else if (ball >= 79 || ball >= 70) {
//         printf("sizning bahoyingiz C");
//     }else if (ball >= 69 || ball >= 60) {
//         printf("sizning bahoyingiz D");
//     }else {printf("59 dan past ball F ga teng");}


// calculator

    int a_son, b_son;
    char amal;
    int result;

    printf("birinchi sonni kiriting: ");
    scanf("%d", &a_son);
    printf("ikkinchi sonni kiriting: ");
    scanf("%d", &b_son);
    printf("nima qilmoqchisiz ( /, *, -, + )" );
    scanf(" %c", &amal);
    
    if (amal == '/') {
        result = a_son / b_son;

    } else if (amal == '*') {
        result = a_son * b_son;

    } else if (amal == '-') {
        result = a_son - b_son;

    } else if (amal == '+') {
        result = a_son + b_son;
    }

    printf("natija: %d\n", result);
    


    return 0;
}

