/*
   Q.10  Illustrate the significance of using modifiers (such as width, precision, and flags) with format
         specifiers.
*/


// Answer:

// Modifiers allow fine control over how data is input or output using format specifiers:

/*
   Width: Specifies the minimum number of characters to print.
*/

=>  printf("%5d", 42);  // Outputs: "   42"

/*
   Precision: Specifies the number of digits after the decimal point (for floating-point numbers).
*/

=>  printf("%.2f", 3.14159);  // Outputs: "3.14"

/*
   Flags: Control the alignment, padding, and display of signs.
*/

=>  printf("%+d", 42);  // Outputs: "+42"

// These modifiers enhance control over formatting, especially in user interfaces and reports.

