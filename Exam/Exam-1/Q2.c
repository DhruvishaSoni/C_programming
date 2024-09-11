#include <stdio.h>



main() {
	
    // Declare and initialize variables
    
    int a = 10;
    int b = 5;

    // Arithmetic operations
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;  // Integer division

    // Display results of arithmetic operations
    
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);

     // Relational operations
    printf("a > b: %d (True)\n ", a > b);   // 1 means true, 0 means false
    printf("a < b: %d (False)\n  ", a < b);
  

    // Logical operations to check if both a and b are positive
    
    printf("Both a and b are positive: %d (True)\n", (a > 0 && b > 0));

}

//Summary

/*

	This C program demonstrates the use of arithmetic, relational, and logical operators. It declares two 
	integer variables, a and b, Computes and prints the sum, difference, product, and quotient using arithmetic operators.
	Compares a and b using relational operators, and prints the results.
	Uses logical operators to check if both a and b are positive numbers.

*/

