#include <stdio.h>


/*
   Q.3  Develop a program that prints the given Left half triangle pattern using a nested for loop.
   
   Answer:
   
                5
              4 5
            3 4 5
          2 3 4 5
        1 2 3 4 5
*/

main(){
	
	int h, d, s;
	
	for(h=5; h>=1; h--){
		for(d=1; d<=h; d++){
			printf("  ");
		}
			for(s=h; s<=5; s++){	
		printf("%d ",s);
	}
		printf("\n");
	}
}

