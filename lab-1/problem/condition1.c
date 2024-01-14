#include <stdio.h>

int main()
{
    int a = 83, b = 26, c = 20;

    int max = (a>b) ? ((a>c)?a:c) : ((b>c)?b:c);

    printf("Maximum = %d\n", max);

    return 0;
}
