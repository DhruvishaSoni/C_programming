#include <stdio.h>

main() {
    int num1, num2, num3, num4;

    printf("Enter a value of the first number: ");
    scanf("%d", &num1);

    printf("Enter a value of the second number: ");
    scanf("%d", &num2);

    printf("Enter a value of the third number: ");
    scanf("%d", &num3);

    printf("Enter a value of the fourth number: ");
    scanf("%d", &num4);

    if (num1 > num2) {
        if (num1 > num3) {
            if (num1 > num4) {
                printf("The maximum value is: %d\n", num1);
            } else {
                printf("The maximum value is: %d\n", num4);
            }
        } else {
            if (num3 > num4) {
                printf("The maximum value is: %d\n", num3);
            } else {
                printf("The maximum value is: %d\n", num4);
            }
        }
    } else {
        if (num2 > num3) {
            if (num2 > num4) {
                printf("The maximum value is: %d\n", num2);
            } else {
                printf("The maximum value is: %d\n", num4);
            }
        } else {
            if (num3 > num4) {
                printf("The maximum value is: %d\n", num3);
            } else {
                printf("The maximum value is: %d\n", num4);
            }
        }
    }

}

