#include <stdio.h>

int main() {
    float fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    float celsius = (fahrenheit - 32) * 5.0 / 9.0;

    printf("%.2f Fahrenheit is equal to %.2f degrees Celsius.\n", fahrenheit, celsius);

    return 0;
}

