#include <stdio.h>

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