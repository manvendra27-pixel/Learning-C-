#include <stdio.h>

//convert distance from km to meter, cm, feetand inch 

 int main() {

    float km, m, cm, in, ft;
    printf("Enter distance in km: ");
    scanf("%f", &km);
    m = km * 1000;
    cm = km * 100000;
    in = km * 39370.1;
    ft = km * 3280.84;

    printf("Distance between two cties in meter: %f\n", m);
    printf("Distance between two cties in cm: %f\n", cm);
    printf("Distance between two cties in inch: %f\n", in);
    printf("Distance between two cties in feet: %f\n", ft);

    return 0;

} 