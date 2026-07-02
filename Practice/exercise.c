#include <stdio.h>
#include <math.h>

// Fix: Add this line to define PI safely for all compilers
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    
    //sum of digits of a number

    // int num, remainder, sum = 0;

    // printf("Enter a number: ");
    // scanf("%d", &num);

    // while( num > 0) {
    //     remainder = num % 10;
    //     sum = sum + remainder;
    //     num = num / 10;
    // }
    // printf("The sum of digits is: %d\n", sum);

    //take cartesian coordinates and convert them to polar coordinates:

    // float x, y, r, theta;
    // printf("Enter the cartesian coordinates (x, y): ");
    // scanf("%f %f", &x, &y);
    
    // r = sqrt((x * x) + (y * y));
    
    // // This will now work perfectly everywhere
    // theta = atan2(y, x) * (180 / M_PI); 
    
    // printf("The polar coordinates are: r = %f, theta = %f\n", r, theta);


    //receive values of latitude and longitude in degrees of two place on the earth and output the distance b/w nautical miles,
    // formula of nautical miles = 3963 cos^-1 ( sinl1 * sinl2 + cosl1 * cosl2 * cos(g2 - g1)) here l1 and l2 are longitude and g1 and g2 are latitude of two places

    // int l1, l2, g1, g2;
    // double dist;

    // printf("Enter the latitude of the place (L1, L2) in degrees: ");
    // scanf("%d %d", &l1, &l2);
    // printf("Enter the longitude of the place (G1, G2) in degrees: ");
    // scanf("%d %d", &g1, &g2);

    // dist = 3963 * acos( sin(l1 * M_PI / 180) * sin(l2 * M_PI / 180) + cos(l1 * M_PI / 180) * cos(l2 * M_PI / 180) * cos((g2 - g1) * M_PI / 180));

    // printf("The distance between the two places is: %f nautical miles\n", dist);
    

    //input two numbers in two location and interchange the content of thaat two numbers 

    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    
    temp = a;
    a = b;
    b = temp;

    printf("Values of a and b after interchanging: a = %d, b = %d\n", a, b);

    // now without using the third variabble

    int x, y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("Values of x and y after interchanging: x = %d, y = %d\n", x, y);

    return 0;
}
