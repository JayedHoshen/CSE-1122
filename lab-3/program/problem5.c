#include <stdio.h>

int main()
{
    int n, m, i, j, mrg_len;
    printf("Enter ara1 ara2 length = ");
    scanf("%d %d", &n, &m);
    int ara1[n], ara2[m];
    mrg_len = n + m;
    int mrg_ara[mrg_len];

    printf("Array one input = ");
    for (i = 0; i < n; i++) scanf("%d", &ara1[i]);
    printf("Array two input = ");
    for (i = 0; i < m; i++) scanf("%d", &ara2[i]);
    // merge ara1 and ara2
    for (i = 0; i < n; i++) mrg_ara[i] = ara1[i];
    for (i = n, j = 0; i < mrg_len; i++, j++) mrg_ara[i] = ara2[j];
    // After merge ara1 and ara2
    printf("\nAfter two array merge = ");
    for (i = 0; i < mrg_len; i++) printf("%d ", mrg_ara[i]);

    return 0;
}