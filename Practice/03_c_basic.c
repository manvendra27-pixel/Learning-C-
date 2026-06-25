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
 
int main() {
    int basic_salary, da, ra, gross_salary;

    printf("Enter the Ramesh's basic salary:");
    scanf("%d", &basic_salary);

    da = (basic_salary * 40) / 100;
    ra = (basic_salary * 20) /100;

    gross_salary = basic_salary + da + ra;
    printf("Ramesh's final Gross salary is: %d", gross_salary);

    
    return 0;
}
 