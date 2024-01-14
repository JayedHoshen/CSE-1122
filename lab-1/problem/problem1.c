/*  1.	Write down a program that will take a number as input and will print its
    absolute value without using any library function. The absolute
    value of a number is the magnitude of it ignoring its sign.
    (You can only use Ternary operator to solve this problem.)
*/
#include <stdio.h>

int main()
{
    double num, abs;

    printf("Enter a number = ");
    scanf("%lf", &num);

    abs = num<0 ? (num*=-1) : num;

    printf("Absolute Value is = %0.2lf\n", abs);

    return 0;
}

    /*if (num < 0){
        num *= -1;
        printf("Absolute Value is = %0.2lf\n", num);
    }

    else printf("Absolute Value is = %0.2lf\n", num);*/
