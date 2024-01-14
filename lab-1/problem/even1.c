#include <stdio.h>

int main()
{
    int num;

    printf("Please enter an integer number = ");
    scanf("%d", &num);

    if (num % 2) printf("Odd\n");
    else printf("Even\n");

    return 0;
}
