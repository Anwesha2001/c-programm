//Write a C program to check whether a number is a prime, Armstrong, or Perfect number using functions.
#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0; // If divisible, not prime
    }
    return 1; // Prime
}

// Function to check if a number is an Armstrong number
int isArmstrong(int n) {
    int original = n, sum = 0, digits = 0;

    // Count the number of digits
    while (original != 0) {
        digits++;
        original /= 10;
    }

    original = n;

    // Calculate the sum of each digit raised to the power of the number of digits
    while (original != 0) {
        int digit = original % 10;
        sum += pow(digit, digits);
        original /= 10;
    }

    return sum == n; // Armstrong number if the sum equals the original number
}

// Function to check if a number is a perfect number
int isPerfect(int n) {
    if (n <= 0) return 0; // Negative or zero cannot be perfect
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) sum += i; // Add proper divisors
    }
    return sum == n; // Perfect number if the sum of divisors equals the number
}

int main() {
    int number;

    // Input a number from the user
    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Check and display results for each type
    if (isPrime(number)) {
        printf("%d is a Prime number.\n", number);
    } else {
        printf("%d is not a Prime number.\n", number);
    }

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    if (isPerfect(number)) {
        printf("%d is a Perfect number.\n", number);
    } else {
        printf("%d is not a Perfect number.\n", number);
    }

    return 0;
}
