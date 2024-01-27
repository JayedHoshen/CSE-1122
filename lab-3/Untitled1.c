// Problem-4:
#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter array length = ");
    scanf("%d", &n);

    int arra[n];
    printf("Enter %d integers: ", n);

    for (i = 0; i < n; i++) {
        scanf("%d", arra[i]);
    }

    for (i = 0; i <= n; i++) {
        printf("%d ", arra[i]);
    }

    return 0;
}

/*
// Problem-3: to find maximum, minimum, average list of floating point numbers
#include <stdio.h>

int main()
{
    int i, n;
    float avg, min, max, sum = 0;
    float arry[10] = {45.25, 43.12, 24.3, 20, 10, 50.03, 25, 15, 34.53, 80.90};

    n = 10;
    min = arry[0];
    max = arry[0];

    for (i = 0; i < n; i++) {
        sum += arry[i];
        if (min > arry[i]) min = arry[i];
        if (max < arry[i]) max = arry[i];
    }
    avg = sum / n;

    printf("Average = %.2f\n", avg);
    printf("Minimum = %.2f\n", min);
    printf("Maximum = %.2f\n", max);

    return 0;
}
// problem-2: print all prime number between two given integers using for and while as outer and inner loop
// second implementation
#include <stdio.h>

int main()
{
    int i, j, n, m, flag;

    printf("Enter first and last value = ");
    scanf("%d %d", &n, &m);

    if (n >= 2 ) {
        for (i = n; i <= m; i++) {
            flag = 0;
            j = 2;
            while (j <= (i/2)) {
                if (i%j == 0) {
                    flag = 1;
                    break;
                }
                j++;
            }
            if (flag == 0) printf("%d ", i);
        }
    }
    else printf("Please a valid number (first number must be greater than 1).");

    return 0;
}
// first implementation
#include <stdio.h>

int main()
{
    int i, j, n, m, flag;

    printf("Enter first (must be greater than 1) and last value = ");
    scanf("%d %d", &n, &m);

    for (i = n; i <= m; i++) {
        flag = 0;
        j = 2;
        while (j <= (i-1)) {
            if (i%j == 0) {
                flag = 1;
                break;
            }
            j++;
        }
        if (flag == 0) printf("%d ", i);
    }

    return 0;
}

// problem-1: 1 + (1 + 2) + (1 + 2 + 3) + ........... + (1+2+3+...+n)
#include <stdio.h>

int main()
{
    int i, j, n, sum = 0;

    printf("Enter value of n = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            sum += j;
        }
    }

    printf("Summation = %d\n", sum);

    return 0;
}

#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter value of n = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
*/
