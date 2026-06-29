#include <stdio.h>

int main() {

    //operation b/w integer and integer oprands
    int a = 5, b = 2, c;
    c = a / b;
    printf("Output always yields to an integer value %d\n", c);

    //operation b/w real and real oprands
    float x = 5.0, y = 2.0, z;
    z = x / y;
    printf("Output always yields to an real value %f\n", z);

    //operation b/w integer and real oprannds
    int p = 2;
    float q = 5.0, r;
    r = p / q;
    printf("Output alwasy yields to a real value %f\n", r);

    return 0;
     
}