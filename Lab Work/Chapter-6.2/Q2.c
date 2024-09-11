#include <stdio.h>

int main() {
    // Initialize the loop with i set to 10, and run it while i is greater than or equal to 1, decrementing i by 1 in each iteration
    for (int i = 10; i >= 1; i--) {
        printf("%d ", i); // Print the current value of i followed by a space
    }

    printf("\n"); // Print a newline character after the loop finishes

    return 0; // Return 0 to indicate successful completion
}

