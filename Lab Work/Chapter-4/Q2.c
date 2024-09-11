#include <stdio.h>

main() {

    int x, y;
    int result;

    printf("Enter value for x: ");
    scanf("%d", &x);

    printf("Enter value for y: ");
    scanf("%d", &y);

    result = (x - y) * (x - y);

    printf("The result of (x - y)^2 is: %d\n", result);

}

