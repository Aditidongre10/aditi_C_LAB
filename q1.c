/*WAP to enter numbers till the user wants. At the end, it should display the count
of positive, negative, and Zeroes entered.*/


#include <stdio.h>

int main() {
    int num;
    int positive = 0, negative = 0, zero = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); // Notice space before %c to consume any leftover newline
    } while (choice == 'y' || choice == 'Y');

    printf("\nCount of positive numbers: %d\n", positive);
    printf("Count of negative numbers: %d\n", negative);
    printf("Count of zeroes: %d\n", zero);

    return 0;
}