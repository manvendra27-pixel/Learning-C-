/* calculation of simple interest */
/* Author: Manav Date: 22/06/26*/

#include <stdio.h>

int main() {
    int principal = 10000, num = 3;
    float rate = 6.75, simple_intrest;

    //formula for simple intrest = (principal amount * rate of intrest * number of years) / 100

    simple_intrest = (principal * rate * num) / 100;

    printf("Simple intrest is: %f\n", simple_intrest);

    return 0;

}
