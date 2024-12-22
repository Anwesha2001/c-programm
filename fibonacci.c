//fibonacci series
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    // Input from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Check if the number of terms is valid
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci sequence:\n");

    // Generate the Fibonacci sequence
    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", first);
            continue;
        }
        if (i == 2) {
            printf("%d ", second);
            continue;
        }
        next = first + second;
        first = second;
        second = next;
        printf("%d ", next);
    }
    
    printf("\n");

    return 0;
}
