#include <stdio.h>

//calculating fibonacci series usiing recursion function

int fibo(int n);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Fibonacci of %d is: %d", num, fibo(num));
    return 0;
}

int fibo(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}