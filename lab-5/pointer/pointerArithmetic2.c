/* Pointer -> Program-5(b)
Write a C program to copy one array to another. 
*/
#include<stdio.h>

/*====----------Function Signature---------====*/
void copyArray(int *arr1, int *arr2, int n);

int main(){
    // array one input
    int n;
    printf("Enter array length: ");
    scanf("%d", &n);

    int array1[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &array1[i]);
    }
    printf("\nPrinting original array...\n");
    for(int i = 0; i < n; i++){
        printf("array1[%d] = %d\n", i, array1[i]);
    }

    // array one value copy to b[array]
    int b[n];
    copyArray(array1, b, n);

    printf("\nPrinting after copy...\n");
    for(int i = 0; i < n; i++){
        printf("b[%d] = %d\n", i, b[i]);
    }

    return 0;
}

/*====----------Copping Array---------====*/
void copyArray(int *arr1, int *arr2, int n){
    for(int i = 0; i < n; i++){
        *(arr2+i) = arr1[i];
    }
}