#include <stdio.h>

main() {
	
    int N;
    
    printf("Enter any number: ");
    scanf("%d", &N); 

    int i = 1; 

    while (i <= N) { 
        printf("%d ", i); 
        i++;
    }

    printf("\n");

}

