#include <stdio.h>

main() {
	
    int num, count = 0;

    printf("Enter any num: ");
    scanf("%d", &num);


    do {
        count++;
        num /= 10;  
    } while (num != 0);

    
    printf("Total number of digits: %d\n", count);

}
