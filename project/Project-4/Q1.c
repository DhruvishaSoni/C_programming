#include <stdio.h>


/*
   Q.1  Develop a program that prints the given Right half triangle pattern using a nested for loop.
   
    Answer:
    
        41
        41 42
        41 42 43
        41 42 43 44
        41 42 43 44 45
*/
		

main() {
	
    int h, d;

    for (h=41; h<=45; h++) {
      
        for (d=41; d<=h ; d++) {
            printf("%d ", d);  
        }
        printf("\n");  
    }

}

