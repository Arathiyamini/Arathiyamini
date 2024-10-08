#include <stdio.h>
int main() {
    int number;
    input:    // Label 
    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("\n not a poitive number entered\n");
        goto input;
    }
    printf("You entered a valid positive number: %d\n", number);
    return 0;
}
//output//
Enter a positive number: -7

 not a poitive number entered
Enter a positive number: 78
You entered a valid positive number: 78
