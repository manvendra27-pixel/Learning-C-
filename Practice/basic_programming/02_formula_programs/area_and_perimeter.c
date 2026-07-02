# include <stdio.h>

int main() {

    int length, bredth, radius_of_circle;

    float area_of_rectangle, perimeter_of_rectangle, area_of_circle, circumference_of_circle, pi = 3.14;

        printf("Enter length and bredth of a rectangle: ");
        scanf ("%d%d", &length, &bredth);

        area_of_rectangle = length * bredth;
        perimeter_of_rectangle = 2 * (length + bredth);

        printf("Area of rectangle is: %f\n", area_of_rectangle);
        printf("Perimeter of rectangle is: %f\n", perimeter_of_rectangle);

        printf("Enter radius of a circle: ");
        scanf("%d", &radius_of_circle);

        area_of_circle = pi *radius_of_circle *radius_of_circle;
        circumference_of_circle = 2 * pi * radius_of_circle;

        printf("Area of circle is: %f\n", area_of_circle);
        printf("Circumference of circle is: %f\n", circumference_of_circle);



    return 0;
}
