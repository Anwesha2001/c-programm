//factorial of a number using function
#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, digit, sum = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number for comparison

    // Calculate the sum of the factorials of each digit
    while (num > 0) {
        digit = num % 10;           // Extract the last digit
        sum += factorial(digit);    // Add the factorial of the digit to sum
        num /= 10;                  // Remove the last digit
    }

    // Check if the sum of the factorials equals the original number
    if (sum == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }

    return 0;
}
