#include <stdio.h>

int main()
{
    int n, i, x = 0, y = 1, z;

    printf("Enter value of n = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d, ", x);
        z = x + y;
        x = y;
        y = z;
    }

    return 0;
}