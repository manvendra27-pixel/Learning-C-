#include <stdio.h>
#include <math.h>

int main() {
    float l1, l2, l3, sp, area_of_triangle;

    printf("Enter the Lengths of the triangle: ");
    scanf("%f %f %f", &l1, &l2, &l3);

    sp = (l1 + l2 + l3) / 2;
    area_of_triangle = sqrt(sp * (sp - l1) * (sp - l2) * (sp - l3));
    o

    printf("Area of Triangle of Three sides are: %f\n", area_of_triangle);

    return 0;

}
