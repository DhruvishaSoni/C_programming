#include <stdio.h>

main() {
	
    int N;
    
    printf("Enter any number: ");
    scanf("%d", &N); 

    int i = 2; 

    do {
        if (i <= N) { 
            printf("%d ", i); 
        }
        i += 2; 
    } while (i <= N); 

    printf("\n"); 

}

