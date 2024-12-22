//Write a program for deleting duplicate elements in an array.
#include <stdio.h>

void checkDuplicates(int arr[], int n) {
    int hasDuplicates = 0; // Flag to track if duplicates are found

    // Loop through each element to compare with the others
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("Duplicate found: %d\n", arr[i]);
                hasDuplicates = 1;
                break; // Stop further checking for this element
            }
        }
    }

    if (!hasDuplicates) {
        printf("No duplicates found.\n");
    }
}

int main() {
    int n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check for duplicates
    checkDuplicates(arr, n);

    return 0;
}
