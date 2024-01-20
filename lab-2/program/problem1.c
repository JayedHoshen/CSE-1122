#include <stdio.h>

int main()
{
    int n, i, c = 0, sum = 0, avg;

    printf("Enter nth value = ");
    scanf("%d", &n);    

    for (i = 1; i <= (2*n-1); i+=2) {
        sum += i;
        c++;
    }
    avg = sum / c;

    printf("Summation is = %d\n", sum);
    printf("Average is = %d\n", avg);

    return 0;
}
