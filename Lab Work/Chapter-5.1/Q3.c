#include <stdio.h>

main() {

    int maths, english, science;
    float average;

    printf("Enter maths marks: ");
    scanf("%d", &maths);

    printf("Enter english marks: ");
    scanf("%d", &english);

    printf("Enter science marks: ");
    scanf("%d", &science);

    average = (maths + english + science) / 3.0;

    printf("Average mark: %.2f\n", average);

}

