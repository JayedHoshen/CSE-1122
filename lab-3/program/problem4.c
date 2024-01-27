#include <stdio.h>

int main()
{
    int n, i, j, k, max, min;

    printf("Enter the length of array = ");
    scanf("%d", &n);
    int ara[n];
    printf("Enter %d number : ", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &ara[i]);

        int b = ara[i];
        for (j = 0; j < i; j++) {
            if (ara[j] > b) {
                for (k = i; k > j; k--) ara[k] = ara[k-1];
                ara[j] = b; break;
            }
        }
    }
    printf("Which position Max do you want (1 to %d) = ", n);
    scanf("%d", &max);
    printf("%dth Maximum number is %d\n", max, ara[n-max]);

    printf("Which position Min do you want (1 to %d) = ", n);
    scanf("%d", &min);
    printf("%dth Minimum number is %d\n", min, ara[min-1]);

    return 0;
}