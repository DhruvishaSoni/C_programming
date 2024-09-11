#include <stdio.h>

main() {
	
    int num, lastDigit, firstDigit;

    
    printf("Enter any num: ");
    scanf("%d", &num);

   
    lastDigit = num % 10;

    
    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;  
    }

    
    printf("Sum of first and last digit: %d\n", firstDigit + lastDigit);

    
    
}
