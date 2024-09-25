#include <stdio.h>

/*
   Q.3  Transpose of 2D Array Develop a Program to find the transpose matrix of a given 2D array.
   
    Example:
        Input:
        Enter the array's row & column size: 3
        Enter array's elements:
            a[0][0] = 2
            a[0][1] = 4
            a[0][2] = 1
            a[1][0] = 3
            a[1][1] = 5
            a[1][2] = 4
            a[2][0] = 8
            a[2][1] = 2
            a[2][2] = 6
        
        Output:
        The transpose matrix of an array:
            2 3 8
            4 5 2
            1 4 6
*/


main() {
    int rows, columns , i , j;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &columns);

    int array[rows][columns];
    int transpose[columns][rows];  

    printf("Enter array's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            transpose[j][i] = array[i][j];
        }
    }

    printf("The transpose of the matrix is:\n");
    for (i = 0; i < columns; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

}
