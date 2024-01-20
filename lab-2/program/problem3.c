#include <stdio.h>

int main()
{
    int i, n, sum = 0;

    printf("Enter an integer number = ");
    scanf("%d", &n);

    for (i = n; i > 0; i/=10) {
        sum = sum * 10 +(i%10);
    }

    if (sum == n) printf("Palindrome.\n");
    else printf("Not palindrome.\n");
    
    return 0;
}