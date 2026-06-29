#include <stdio.h>

int main() {

    // int num, d5, d4, d3, d2, d1;
    // long int revnum;

    int num, remainder, reverse = 0;
    printf("Enter the five digit number: ");
    scanf("%d", &num);

    while(num != 0) {
        remainder = num % 10;
        reverse = (reverse * 10) + remainder;
        num = num / 10; 
    }

    printf("The reeversed number is: %d\n", reverse);
    

    return 0;
}