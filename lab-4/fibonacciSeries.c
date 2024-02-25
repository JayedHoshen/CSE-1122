/*
The series 0, 1, 1, 2, 3, 5, 8, 13, ... is called the Fibonacci series. Here, termn=termn-1 + termn-2, for n>1, term0 = 0, term1 = 1. Write a program that finds the sum of first n terms of the series using recursion.  
*/
#include <stdio.h>

int fib(int num);

int main()
{
    int n, i, sum = 0;
    printf("Enter value of n = ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) sum += fib(i);
    printf("Sum of first %d terms is = %d\n", n, sum);

    return 0;
}

int fib(int n) {
    if(n == 1) return 0;
    else if(n == 2) return 1;
    else return fib(n-1) + fib(n-2);
}