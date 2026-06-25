#include <stdio.h>

// calculate simple intrest but taking input from user.

/* int main() {
    int p, n;
    float r, si;
    printf("Enter principal amount, number of years and rate of intrest:");
    scanf("%d %d %f", &p, &n, &r);
    si = (p * n * r) / 100;
    printf("Simple intrest is: %f", si);

    return 0;
} */


// calculating the gross salery of Ramesh 
 
/* int main() {
    int basic_salary, da, ra, gross_salary;

    printf("Enter the Ramesh's basic salary:");
    scanf("%d", &basic_salary);

    da = (basic_salary * 40) / 100;
    ra = (basic_salary * 20) /100;

    gross_salary = basic_salary + da + ra;
    printf("Ramesh's final Gross salary is: %d", gross_salary);

    
    return 0;
} */

//convert distance from km to meter, cm, feetand inch 

/* int main() {

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

} */

//find out the aggrigate marks and percentage markes obtained by a student in 5 subjects.

int  main() {

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
  