#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

main() {
	
    int startYear, endYear;

    printf("Enter the first number: ");
    scanf("%d", &startYear);

    printf("Enter the second number: ");
    scanf("%d", &endYear);

    if (startYear > endYear) {
        printf("The first number should be less than or equal to the second number.\n");
        return 1; 
    }

    int year = startYear;

    printf("Leap years between %d and %d are:\n", startYear, endYear);

    while (year <= endYear) {
        if (isLeapYear(year)) {
            printf("%d ", year); 
        }
        year++; 
    }

    printf("\n");

}

