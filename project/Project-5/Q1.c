#include <stdio.h>

/*
   Q.1  Negative Elements in 1D Array Develop a program that finds all the negative elements from a given 1D 
        array.
        
    Example:
        Input:
        Enter the array's size: 5
        Enter array's elements:
            a[0] = 2
            a[1] = -4
            a[2] = 1
            a[3] = -3
            a[4] = -5
            
        Output:
            Negative elements from an Array: -4, -3, -5
*/


main() {
    int h,d;

    printf("Enter the array's size: ");
    scanf("%d", &d);

    int array[d];

    printf("Enter array's elements:\n");
    for (h = 0; h < d; h++) {
        printf("a[%d] = ", h);
        scanf("%d", &array[h]);
    }

    printf("Negative elements from the array: ");
    for (h= 0; h< d; h++) {
        if (array[h] < 0) {
            printf("%d ", array[h]);
        }
    }
    
    printf("\n");
    
}

