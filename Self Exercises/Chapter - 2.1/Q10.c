/*
   Q.10  Discuss the concept of global and local variables in C. Provide examples.
*/


// Answer:


/*
   Global Variables: Declared outside of all functions and accessible from any function in the program.
*/

int globalVar = 10;  // Global variable
void func() {
    printf("%d", globalVar);  // Accessible here
}
   

/*
   Local Variables: Declared within a function or block and only accessible within that function or block.
*/   
   
void func() {
    int localVar = 5;  // Local variable
    printf("%d", localVar);  // Accessible only here
}
   
