#include <stdio.h>

main() {
	
    int N;
    
    printf("Enter any number: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("The number must be greater than 0.\n");
        return 1;
    }

    int a = 0, b = 1;

    printf("Fibonacci series up to %d numbers:\n", N);

    for (int i = 0; i < N; i++) {
 
        printf("%d", a);

        if (i < N - 1) {
            printf(", ");
        }

        int next = a + b;
        a = b;
        b = next;
    }

    printf("\n"); 

}

