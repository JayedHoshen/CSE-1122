#include <stdio.h>

int main()
{
    int i, j, k, n;

    printf("Enter value of n = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        int a = 97;
        for (j = 1; j <= i; j++) printf("%c", a++) ;
        printf(" ");
        for (k = 1; k <= i; k++) printf("%c", a-1);
        printf("\n");
    }

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int i, j, n;

//     printf("Enter value of n = ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; i++) {
//         for (j = 1; j <= i; j++) printf("* ");
//         printf("\n");
//     }

//     return 0;
// }