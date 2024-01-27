#include <stdio.h>

int main() {
    int n, sum_w = 0, i = 1, sum_for = 0;

    printf("Enter value of n = ");
    scanf("%d", &n);

    while (i <= n) {
        sum_w += ((i + 1) * (i + 2));
        i++;
    }

    for (i = 1; i <= n; i++) sum_for += ((i + 1) * (i + 2));

    printf("Sum of while loop: %d\n", sum_w);
    printf("Sum of for loop: %d\n", sum_for);

    if (sum_w == sum_for) printf("Both loops result are same.\n");
    else printf("Both loops result are difference.\n");

    return 0;
}
