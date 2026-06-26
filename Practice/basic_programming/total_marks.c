#include <stdio.h>

int main() {

        int sub1, sub2, sub3, sub4, sub5;
        float total_marks, percentage;

        printf("Enter marks of 5 subject of a student: ");
        scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

        total_marks = sub1 + sub2 + sub3 + sub4 + sub5;

        percentage = total_marks / 5;

        printf("Total aggrigate marks obtained by a student in 5 subject is: %f\n", total_marks);
        printf("Percentage marks obtained by a student in 5 subject is: %f\n", percentage);

    return 0;
}