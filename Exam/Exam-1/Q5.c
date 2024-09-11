#include <stdio.h>

main() {
	
    int n,i,j;

// Prompt the user to enter the size of the table
    
    printf("Enter the size of the table (1 to 100): ");
    scanf("%d", &n);

// Validate the input
    
    if (n < 1 || n > 100) {
        printf("Invalid size. Please enter a number between 1 and 100.\n");
        return 1;
    }

// Print the multiplication table
    
    printf("\nMultiplication Table:\n");
    
    for ( i = 1; i <= n; i++) {
        for ( j = 1; j <= n; j++) {
            // formatting strings
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // Newline for better readability between rows
    }

}

//Summary

/*

	This C program combines multiple concepts like user input, loops. It prompts the user to 
	enter a number n for the size of the multiplication table, then uses nested for loops to generate and 
	display the table.
	
*/

