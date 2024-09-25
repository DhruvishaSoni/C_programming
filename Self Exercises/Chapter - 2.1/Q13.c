/*
   Q.13  Explain the syntax of the printf() function along with its arguments.
*/



// Answer:

// The syntax of printf():

=>  printf("format string", variable1, variable2, ...);

/*
=>  The format string contains text and format specifiers.
=>  Variables are listed in order corresponding to the format specifiers.
*/

// Example:

int x = 10;
float y = 3.14;
printf("x = %d, y = %f", x, y);  // Outputs: x = 10, y = 3.140000

