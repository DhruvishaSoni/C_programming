/*
   Q.2  Explain the syntax of the scanf() function along with its arguments.
*/


// Answer:

//  The syntax of scanf() is:

=>  scanf("format specifiers", &variable1, &variable2, ...);

/*
=>  format specifiers: Indicate the data type of each input (e.g., %d for integers, %f for floats).
=>  &variable: The address of the variables where the input values will be stored. The ampersand (&) operator 
    is used to pass the address.
*/

// Example:

int x;
scanf("%d", &x);

