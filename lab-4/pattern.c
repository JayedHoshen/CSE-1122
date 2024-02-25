/*Problem-1:
Write a multifunction program to print the following patterns where number of rows is user input and must be read in main function. There should be separate function for each of the following patterns and note that, you cannot pass any data through parameters to those functions. 
*/

/*---===== Header File ====--*/
#include <stdio.h>

/*---===== Global Variable ====--*/
int n, row, col;

/*---=====Function Signature ====--*/
void oddPatternA();
void reversePatternC();
void starPatternD();

/*---===== Main Function ====--*/
int main()
{
    printf("Enter value of n = ");
    scanf("%d", &n);

    oddPatternA();
    printf("\n");
    reversePatternC();
    printf("\n");
    starPatternD();

    return 0;
}

/*
=====--- Pattern-(a)
    4444444
    33333  
    222  
    1
=============-------
*/
void oddPatternA() {
    for(row = n; row >= 1; row--) {
        for(col = 1; col <= (row*2-1); col++) printf("%d", row);
        printf("\n");
    }
}

/*
=====--- Pattern-(c)
    7654321  
    54321  
    321  
    1 
=============------
*/
void reversePatternC() {
    int a = n*2-1;
    for(row = n; row >= 1; row--) {
        for(col = a; col >= 1; col--) printf("%d", col);
        a-=2;
        printf("\n");
    }
}

/*
=====--- Pattern-(d)
    * * * * *  
    * * *  
    *  
    * * *  
    * * * * *
============-------
*/
void starPatternD() {
    for(row = n; row > 1; row--) {
        for(col = 1; col <= (row*2-1); col++) printf("*");
        printf("\n");
    }

    for(row = 1; row <= n; row++) {
        for(col = 1; col <= (row*2-1); col++) printf("*");
        printf("\n");
    }
}