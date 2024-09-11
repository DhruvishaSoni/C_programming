#include <stdio.h>

main() {
	
    int N;

    printf("Enter any number: ");
    scanf("%d", &N); 

    if (N % 2 == 0) {
        N--; 
    }

    while (N >= 1) { 
        printf("%d ", N); 
        N -= 2; 
    }

    printf("\n"); 

}

