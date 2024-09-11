#include <stdio.h>

main() {
	
// Declare variables of different data types
    int integerVar = 10;
    float floatVar = 20.5f;
    double doubleVar = 30.555;
    char charVar = 'A';


// Print the values of each variable along with its data type
    printf("Integer: %d\n", integerVar);
    printf("Float: %.2f\n", floatVar);
    printf("Double: %.3lf\n", doubleVar);
    printf("Character: %c\n", charVar);

// Print the size of different data types using sizeof()
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu bytes\n", sizeof(char));

}

//Summary

/*

	 This C program demonstrates the use of basic data types (int, float, double, char), constants, and the sizeof()
	 function. It declares variables, initializes them with values, prints their values and sizes, The program shows 
	 how to handle different data types, constants, and the size of data types in memory.

*/

