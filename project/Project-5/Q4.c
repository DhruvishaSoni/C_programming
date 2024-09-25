#include <stdio.h>

/*
   Q.4  Sum of Elements in Row & Column of 2D Array Develop a Program to print and find the sum of all elements 
        of a given row & column from a 2D array.
        
    Example:
        Input:
        Enter the array's row size: 3
        Enter the array's column size: 3
        Enter array's elements:
            a[0][0] = 2
            a[0][1] = 7
            a[0][2] = 1
            a[1][0] = 3
            a[1][1] = 5
            a[1][2] = 4
            a[2][0] = 8
            a[2][1] = 9
            a[2][2] = 6
        Output:
        Enter row number: 0
        Elements of row 0: 2, 7, 1
            The sum of a row 0: 10
        Enter column number: 2
        Elements of column 2: 1, 4, 6
            The sum of column 2: 11
*/


main() {
    int rowSize, colSize , i , j;
    
    printf("Enter the array's row size: ");
    scanf("%d", &rowSize);
    printf("Enter the array's column size: ");
    scanf("%d", &colSize);

    int array[rowSize][colSize];

    printf("Enter array's elements:\n");
    for (i = 0; i < rowSize; i++) {
        for ( j = 0; j < colSize; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int rowNum;
    printf("\nEnter row number: ");
    scanf("%d", &rowNum);

    if (rowNum >= 0 && rowNum < rowSize) {
        int rowSum = 0;
        printf("Elements of row %d: ", rowNum);
        for (j = 0; j < colSize; j++) {
            printf("%d", array[rowNum][j]);
            if (j != colSize - 1) {
                printf(", ");
            }
            rowSum += array[rowNum][j];
        }
        printf("\nThe sum of row %d: %d\n", rowNum, rowSum);
    } else {
        printf("Invalid row number.\n");
    }

    int colNum;
    printf("\nEnter column number: ");
    scanf("%d", &colNum);

    if (colNum >= 0 && colNum < colSize) {
        int colSum = 0;
        printf("Elements of column %d: ", colNum);
        for (i = 0; i < rowSize; i++) {
            printf("%d", array[i][colNum]);
            if (i != rowSize - 1) {
                printf(", ");
            }
            colSum += array[i][colNum];
        }
        printf("\nThe sum of column %d: %d\n", colNum, colSum);
    } else {
        printf("Invalid column number.\n");
    }

}


