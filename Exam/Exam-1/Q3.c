#include <stdio.h>




main() {
	
    int number;

    // Prompt the user to enter an integer value
    
    printf("Enter an integer value: ");
    scanf("%d", &number);

    // Use if-else statement to check if the number is positive, negative, or zero
    
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    // Prompt the user to enter a number for the day of the week (1-7)
    
    int day;
    printf("Enter a number (1-7) to get the corresponding day: ");
    scanf("%d", &day);

    // Use switch statement to display the day of the week
    
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 7.\n");
            break;
    }

}

//Summary

/*
	This C program demonstrates the use of control structures (if-else and switch). It first prompts the user to 
	enter an integer and checks if it's positive, negative, or zero using an if-else statement. Then, it prompts 
	the user to enter a number between 1 and 7, using a switch statement to display the corresponding day of the
	week. If the number is outside the valid range, an error message is shown.
	
*/

