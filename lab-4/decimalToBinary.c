/*
Convert a decimal number into correspondent binary number using recursion where decimal number is input from user.
*/
#include <stdio.h>

int decimalToBinaryC(int num);

int main()
{
    int n;
    printf("Enter a decimal number = ");
    scanf("%d", &n);

    printf("Binary value = %d\n", decimalToBinaryC(n));

    return 0;
}

int decimalToBinaryC(int n) {
    if(n == 0) return 0;
    else return (n % 2 + 10 * (decimalToBinaryC(n/2)));
}