/* Pointer -> Program-5(a)
Write a C program to take input and print elements of an array.
*/
#include <stdio.h>

/*====----------Function Signature---------====*/
void traverseArray(int *arr, int num);

int main(){
    int n;

    printf("Enter array length: ");
    scanf("%d", &n);

    int ara[n];

    for(int i = 0; i < n; i++) scanf("%d", &ara[i]);

    // function call
    traverseArray(ara, n);

    return 0;
}

/*====----------Traversing Array---------====*/
void traverseArray(int *arr, int n) {
    for(int i = 0; i < n; i++) printf("%d ", *(arr+i));
}