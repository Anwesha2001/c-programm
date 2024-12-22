//calculating sum of digits
#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the input is positive
    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Calculate sum of digits
    while (num > 0) {
        remainder = num % 10;   // Extract the last digit
        sum += remainder;       // Add it to the sum
        num /= 10;              // Remove the last digit
    }

    // Output the result
    printf("Sum of the digits is: %d\n", sum);

    return 0;
}
