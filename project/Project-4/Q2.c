#include <stdio.h>


/*
   Q.2  Develop a program that prints the given Floyd’s triangle pattern using a nested for loop.
   
    Answer:
    
       11
       12 13
       14 15 16
       17 18 19 20
*/


main() {
	
    int h, d, num = 11;  

    for (h=1; h<=4; h++) {
        
        for (d=1; d<=h; d++) {
            printf("%d ", num); 
            num++;  
        }
        printf("\n");  
    }

}

