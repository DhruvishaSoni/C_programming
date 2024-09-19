#include <stdio.h>


/*
   Q.4  Develop a program that prints the given Inverted Left half triangle pattern using a nested for
        loop.
        
    Answer:
        
        1 0 1 0 1
          1 0 1 0
            1 0 1
              1 0
                1
*/


main() {
	
    int h, d, s;

    for (i = 5; i >= 1; i--) {
        
        for (k = 5; k >= i; k--) {
            printf("  ");  
        }
        
        for (j = 1; j <= i; j++) {
            printf("%d ", j %2);  
        }
        printf("\n");  
    }

}

