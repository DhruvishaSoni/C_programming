/*
   Q.14  Can you print multiple variables using a single printf() statement? If yes, how? 
*/


// Answer:

/*
   Yes, multiple variables can be printed using a single printf() statement by including multiple format 
   specifiers in the format string and providing corresponding variables in the argument list.
*/

// Example:

int a = 5;
float b = 4.5;
char c = 'A';
printf("a = %d, b = %f, c = %c", a, b, c);  // Outputs: a = 5, b = 4.500000, c = A

