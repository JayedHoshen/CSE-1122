// #include <stdio.h>

// int main()
// {
//     int i, j, z, n, x, pow;
//     double sum = 0.0, fact = 1;

//     printf("Enter value of n = ");
//     scanf("%d", &n);
//     printf("Enter value of x = ");
//     scanf("%d", &x);

//     for (i = 2, z = 1; i <= (n+1); i++, z++) {
//         fact *= i;

//         pow = 1;
//         for (j = 1; j <= i; j++) pow *= x;

//         if (z%3==0) sum -= (pow / fact);
//         else sum += (pow / fact);
//     }
//     printf("Summation = %.2lf\n", sum);

//     return 0;
// }

// second problem
#include <stdio.h>

int main()
{
    int n, i, j, sum = 0;

    printf("Enter value of n = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (i * (i+1) / 2);
    }

    printf("Summation = %d\n", sum);

    return 0;
} 
