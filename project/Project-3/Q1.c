#include <stdio.h>

main() {
	
    char ch = 'D';  

    
    do {
        printf("%c\n", ch);
        ch += 4;  
    } while (ch <= 'Z');

    printf("\n");

}
