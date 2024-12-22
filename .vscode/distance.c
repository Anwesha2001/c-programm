#include <stdio.h>

int main() {
    int k;
    float cm, inch, m, f;

    // Taking input
    printf("Enter distance between two cities in kilometers: ");
    scanf("%d", &k);

    // Calculations
    cm = k * 1e5;         // 1 kilometer = 100,000 centimeters
    m = k * 1e3;          // 1 kilometer = 1,000 meters
    inch = k * 39370.1;   // 1 kilometer = 39,370.1 inches
    f = k * 3280.84;      // 1 kilometer = 3,280.84 feet

    // Printing the results
    printf("Distance in centimeters: %f\n", cm);
    printf("Distance in meters: %f\n", m);
    printf("Distance in inches: %f\n", inch);
    printf("Distance in feet: %f\n", f);

    return 0;
}
