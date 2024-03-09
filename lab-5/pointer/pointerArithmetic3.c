/* Pointer -> Program-5(c)
Write a program to search for an element in an array.
*/
#include<stdio.h>

/*====----------Function Signature---------====*/
void findElement(int *a, int n, int x);

int main(){
    int n, x;
    printf("Enter array length: ");
    scanf("%d", &n);

    int array1[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &array1[i]);
    }
    
    printf("Enter a number: ");
    scanf("%d", &x);

    // function call
    findElement(array1, n, x);

    return 0;
}

/*====----------Define function---------====*/
void findElement(int *a, int n, int x) {
    int res = 0;
    for(int i = 0; i < n; i++) {
        int dd = *(a+i);
        if(dd == x){
            res = 1;
        }
    }
    if(res == 1) {
        printf("%d is Found\n", x);
    }
    else {
        printf("%d is Not Found\n", x);
    }
}