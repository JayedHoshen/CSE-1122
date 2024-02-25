// second problem
// factorial fnc with recursion
#include <stdio.h>

int fact(int n);
int fib(int n);

int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    printf("fact(%d) = %d\n", n, fact(n));

    for(int i = 1; i<= n; i++) {
        sum += fib(i);
        printf("%d ", fib(i));
    }
    printf("\nSum of fib series = %d\n", sum);

    return 0;
}

int fact(int n) {
    if(n == 0) return 1;
    else  return fact(n-1)*n;
}
int fib(int n) {
    if(n==0) return 0;
    if(n==1) return 1;
    else return fib(n-1) + fib(n-2);
}

/* // factorial fnc without recursion
#include <stdio.h>

int fact(int n);

int main()
{
    int n;
    scanf("%d", &n);

    printf("fact(%d) = %d\n", n, fact(n));


    return 0;
}

int fact(int n) {
    int i, fact = 1;

    for(i = 1; i <= n; i++) fact *= i;
    return fact;
}






// using function first problem
#include <stdio.h>

void oddPattern();
void reversePattern();
void starPattern();

int main()
{
    //oddPattern();
    //reversePattern();
    starPattern();

    return 0;
}
void oddPattern() {
    int row, col, a, n, k;
    scanf("%d", &n);

    a = n*2-1;
    for(row = n; row >= 1; row--) {
        k = 4;
        for(col = a; col >= 1; col--) {
            printf("%d", a);
        }
        a-=2;
        printf("\n");
    }
}

void reversePattern() {
    int row, col, a, n;
    scanf("%d", &n);

    a = n*2-1;
    for(row = n; row >= 1; row--) {
        for(col = a; col >= 1; col--) {
            printf("%d", col);
        }
        a-=2;
        printf("\n");
    }
}

void starPattern() {
    int row, col, a, n;
    scanf("%d", &n);

    a = n*2-1;
    for(row = n; row >= 1; row--) {
        for(col = a; col >= 1; col--) {
            printf("*");
        }
        a-=2;
        printf("\n");
    }

    for(row = 1; row <= a-1; row++) {
        for(col = a; col >= 1; col--) {
            printf("*");
        }
        a-=2;
        printf("\n");
    }
}


#include <stdio.h> // first program

void add(int count) {
    count++;
    printf("%d\n", count);
}

int main()
{
    int count = 1;

    add(count);
    printf("%d\n", count);

    return 0;
}
*/
