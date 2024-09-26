#include <stdio.h>

/*
   Q.1 Calculator
       Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and %
       using UDF, switch case, and looping. Make sure that the program is endless until a certain letter
       is pressed.
       
    Example:
    
        Input/Output:
        Press 1 for +
        Press 2 for -
        Press 3 for *
        Press 4 for /
        Press 5 for %
        Press 0 for the exit
        
        Enter your choice: 1
        Enter the first number: 5
        Enter the second number: 3
        Addition of 5 and 3 is 8
        
        Press 1 for +
        Press 2 for -
        Press 3 for *
        Press 4 for /
        Press 5 for %
        Press 0 for the exit
        
        Enter your choice: 4
        Enter the first number: 10
        Enter the second number: 5
        Division of 10 and 5 is 2
        
        Press 1 for +
        Press 2 for -
        Press 3 for *
        Press 4 for /
        Press 5 for %
        Press 0 for the exit

        Enter your choice: 0
*/


void addition(int h, int d);
void subtraction(int h, int d);
void multiplication(int h, int d);
void division(int h, int d);
void modulo(int h, int d);

main() {
    int choice;
    int num1, num2;

    do {
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {
            printf("Enter The First Number: ");
            scanf("%d", &num1);
            printf("Enter The Second Number: ");
            scanf("%d", &num2);
        }

        switch (choice) {
            case 1:
                addition(num1, num2);
                break;
                
            case 2:
                subtraction(num1, num2);
                break;
                
            case 3:
                multiplication(num1, num2);
                break;
                
            case 4:
                division(num1, num2);
                break;
                
            case 5:
                modulo(num1, num2);
                break;
                
            case 0:
                printf("Exiting The Program.\n");
                break;
                
            default:
                printf("Invalid choice! Please enter a valid option.\n");
                break;
        }
    } 
	
	while (choice != 0);

}



void addition(int h, int d) {
    printf("Addition of %d and %d is %d\n", h, d, h + d);
}

void subtraction(int h, int d) {
    printf("Subtraction of %d and %d is %d\n", h, d, h - d);
}

void multiplication(int h, int d) {
    printf("Multiplication of %d and %d is %d\n", h, d, h * d);
}

void division(int h, int d) {
    if (d != 0) {
        printf("Division of %d and %d is %d\n", h, d, h / d);
    }      
    
}

void modulo(int h, int d) {
    if (d != 0) {
        printf("Modulo of %d and %d is %d\n", h, d, h % d);
    } 
       
}


