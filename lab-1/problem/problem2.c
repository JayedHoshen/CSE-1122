/* Write down a program that will take an integer as input
    and print YES if the number is divisible 5 but not divisible by 7
    and print NO otherwise.
*/
#include <stdio.h>

int main()
{
    int num;

    printf("Enter an integer number = ");
    scanf("%d", &num);

    if (num%5 == 0 && num%7 != 0) printf("YES\n");
    else printf("NO\n");

    return 0;
}
