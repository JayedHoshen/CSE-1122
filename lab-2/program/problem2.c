#include <stdio.h>

int main()
{
    int crt, prev = 15;
    char ch;

    do {
        printf("Enter an integer: ");
        scanf("%d", &crt);

        if (crt < prev) printf("It is less than %d.\n", prev);
        else if (crt > prev) printf("It is greater than %d.\n", prev);
        else printf("It is equal to %d.\n", prev);

        printf("Do you want to continue (y/n)? ");
        scanf(" %c", &ch);

        if (ch == 'n') break;
        else prev = crt;
    } while (1);

    return 0;
}
