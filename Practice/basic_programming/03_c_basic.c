#include <stdio.h>

// calculate simple intrest but taking input from user.

 int main() {
    int p, n;
    float r, si;
    printf("Enter principal amount, number of years and rate of intrest:");
    scanf("%d %d %f", &p, &n, &r);
    si = (p * n * r) / 100;
    printf("Simple intrest is: %f", si);

    return 0;
} 








  