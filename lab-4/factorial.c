/*Problem-2:
 Write a function to calculate the factorial value of any integer entered through the keyboard.  
*/
#include <stdio.h>

int fact(int num);

int main()
{
    int num;

    printf("Enter an integer number = ");
    scanf("%d", &num);

    printf("%d Factorial is %d\n", num, fact(num));

    return 0;
}

int fact(int n) {
    if(n == 0 || n == 1) return 1;
    else return n*fact(n-1);
}