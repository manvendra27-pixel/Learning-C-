//calculating fibonacci series usiing recursion function


#include <stdio.h>
//method declaration
int fibo(int n);


//method calling in main method 
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Fibonacci of %d is: %d", num, fibo(num));
    return 0;
}

//method defination
int fibo(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}