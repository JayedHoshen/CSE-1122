/*  Given a 3-digit number as input by the user find
    and print its minimum digit. For example if the
    user input is 361 the output is 1;
*/
#include <stdio.h>

int main()
{
    int num, a, b, c, min;

    printf("Please enter a 3 digit integer number = ");
    scanf("%d", &num);

    a = num % 10;
    num = num / 10;

    b = num % 10;
    num = num / 10;

    c = num % 10;

    min = a < b ? (a<c?a:c) : (b<c?b:c);

    printf("Minimum digit = %d\n", min);

    return 0;
}
