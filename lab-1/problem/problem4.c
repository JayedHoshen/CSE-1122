/* 4.Write a program that takes an arithmetic operator ('+', '-', '*' or '/')
    and two operands as input and perform the corresponding arithmetic operation
    on the operands.(You must use switch-case to solve the problem.);
*/
#include <stdio.h>

int main()
{
    char ch;
    double a, b, result;

    printf("Enter (+, -, *, /) an operator = ");
    scanf("%c", &ch);

    printf("Enter two numbers = ");
    scanf("%lf %lf", &a, &b);

    switch (ch) {
        case '+':
            result = a + b;
            printf("Result = %0.2lf\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result = %0.2lf\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result = %0.2lf\n", result);
            break;
        case '/':
            result = a / b;
            printf("Result = %0.2lf\n", result);
            break;

        default :
            printf("Please a valid operator.\n");
    }

    return 0;
}
