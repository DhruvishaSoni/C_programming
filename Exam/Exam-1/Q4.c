#include <stdio.h>



main() {
	
    int i, num, fact = 1, choice;

    // Use a for loop to print the first 10 natural numbers
    
    printf("First 10 natural numbers: ");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    // Use a while loop to calculate and print the factorial of a number provided by the user
    printf("Enter a number to calculate factorial: ");
    scanf("%d", &num);

    i = 1;
    while (i <= num) {
        fact *= i;
        i++;
    }
    printf("Factorial of %d is %d\n\n", num, fact);

    // Use a do-while loop to print a menu repeatedly until the user chooses to exit
    
    do {
        printf("Menu:\n");
        printf("1. Option 1\n");
        printf("2. Option 2\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You selected Option 1\n\n");
                break;
            case 2:
                printf("You selected Option 2\n\n");
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n\n");
        }
    } while (choice != 3);

}

//Summary

/*

	This C program demonstrates different types of loops: for, while, and do-while. 
	Uses a for loop to print the first 10 natural numbers.
	Uses a while loop to calculate and print the factorial of a number entered by the user.
	Uses a do-while loop to display a menu repeatedly until the user selects the exit option.
	
*/

