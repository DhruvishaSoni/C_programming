#include <stdio.h>

main() {
	
    int a = 12;
    int b = 6;
    
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    printf("Addition of %d and %d is %d\n", a, b, sum);
    printf("Subtraction of %d and %d is %d\n", a, b, difference);
    printf("Multiplication of %d and %d is %d\n", a, b, product);
    printf("Division of %d and %d is %d\n", a, b, quotient);
    printf("Modulo of %d and %d is %d\n", a, b, remainder);
    
    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, difference);
    printf("%d * %d = %d\n", a, b, product);
    printf("%d / %d = %d\n", a, b, quotient);
    printf("%d %% %d = %d\n", a, b, remainder); 

}
