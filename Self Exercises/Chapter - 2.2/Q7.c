/*
   Q.7  Discuss the advantages of using const keyword over preprocessor macros for defining constants.
*/


// Answer:

/*
1. Type safety: const variables are type-checked by the compiler, while macros are not.
2. Scope: const variables follow the scoping rules of C, whereas macros are globally defined.
3. Debugging: const variables are easier to debug because they exist in memory, while macros are replaced by 
              their values before compilation.
4. Consistency: Using const ensures that the variable behaves like a normal variable, while macros can lead to 
                unexpected behavior due to textual substitution.
*/

