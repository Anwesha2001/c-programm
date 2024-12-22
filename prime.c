//prime number
#include <stdio.h>

int isPrime(int num) {
    if (num < 2)
        return 0; // Numbers less than 2 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // If divisible, not prime
    }
    return 1; // Number is prime
}

int main() {
    int n;

    // Input from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);
    for (int i = 0; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
