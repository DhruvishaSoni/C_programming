#include <stdio.h>

main() {

    int a, b;

    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

}

