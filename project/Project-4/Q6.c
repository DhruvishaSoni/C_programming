#include <stdio.h>


/*
  Q.6  Develop a program that prints the given Custom numeric pattern using a nested for loop.
  
  Answer:
  
        1                 1
        1 2             2 1
        1 2 3         3 2 1
        1 2 3 4     4 3 2 1
        1 2 3 4 5 5 4 3 2 1 
*/


main() {
	
    int h, d;

    for (h = 1; h <= 5; h++) {    
        for (d = 1; d <= h; d++) {
            printf("%d ", d);  
        }
      
		for(d=h; d<5; d++){
			printf("    ");
		}
		for(d=h; d>=1; d--){	
		printf("%d ",d);
	}

        printf("\n");  
    }

}
