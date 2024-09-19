#include <stdio.h>


/*
   Q.5  Develop a program that prints the given Full Pyramid pattern using a nested for loop.
   
   Answer:
   
                5
              4 5 4
            3 4 5 4 3
          2 3 4 5 4 3 2
        1 2 3 4 5 4 3 2 1
*/


main() {
	
   	int h, d, s;
	
	for(h=5; h>=1; h--){
		for(d=1; d<=h; d++){
			printf("  ");
		}
			for(s=h; s<=5; s++){	
		printf("%d ",s);
	}
	for (s=4; s>=h; s--){
		 printf("%d ", s);
	}
		printf("\n");
	}
}





