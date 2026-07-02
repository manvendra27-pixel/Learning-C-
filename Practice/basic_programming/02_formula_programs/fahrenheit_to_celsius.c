#include <stdio.h>

int  main() {

    float fahrenheit, celsius;

    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit -32) * 5 /9;

    printf("Temperature in celsius is: %f\n", celsius);

    return 0;

}