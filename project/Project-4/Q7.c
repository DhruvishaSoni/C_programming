#include <stdio.h>


/*
   Q.7  Develop a program that prints the given Custom alphabetic pattern using a nested for loop.
   
   Answer:
   
        * * * * *
        *       *
        * * * * *
        *
        *
*/


main() {
    int d, h = 5;  

    for (d = 1; d <= h; d++) {
        printf("* ");
    }
    printf("\n");

    printf("* ");
    for (d = 2; d < h; d++) {
        printf("  ");
    }
    printf("*\n");

    for (d = 1; d <= h; d++) {
        printf("* ");
    }
    printf("\n");

    printf("*\n");

    printf("*\n");

}

