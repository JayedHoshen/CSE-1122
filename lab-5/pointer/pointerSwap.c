/* Pointer -> Program-6
 Write a function that to swaps two numbers using pointers.
*/
#include <stdio.h>
/*====----------Function Signature---------====*/
void swapFnc();

int main()
{
    swapFnc();

    return 0;
}

/*====----------Swap Two number Using pointer---------====*/
void swapFnc() {
    int *n1, *n2, a, b;

    printf("Enter two number = ");
    scanf("%d %d", &a, &b);
    printf("Before swap: a = %d,\tb = %d\n", a, b);

    n1 = &a;
    n2 = &b;

    *n1 = *n1+*n2 - (*n2 = *n1);
    printf("After swap: a = %d,\tb = %d\n", a, b);
}

