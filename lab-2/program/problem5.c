#include <stdio.h>

int main()
{
    int a, b, i, j, f;

    printf("Enter value of a(a>1) and b = ");
    scanf("%d %d", &a, &b);

    for (i = a; i <= b; i++) {
        f = 0;
        for (j = 2; j < i; j++) {
            if (i%j == 0) {
                f = 1;
                break;
            }
        }
        if (f == 0) printf("%d ", i);
    }

    return 0;
}