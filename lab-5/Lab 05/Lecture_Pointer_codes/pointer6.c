#include<stdio.h>

int main() {
    int i;
    int N = 10;
    int *p;
    int a[10] ;
    for(i = 0; i < N; i++){
        a[i] = 44;
    }

    printf("Using Array: ");
    for ( i = 0; i < N; i++) {
        printf("%d ", a[i]);
        //printf("%d ", i[a]); // same as a[i]
    }
    printf("\n");

    //p = &a[0];
    p = a; // same as p = &a[0]
    //p = &a[2]; // points to 3rd element of the array
    printf("%d \n", p);
    printf("Using Pointer: ");
    for ( i = 0; i < N; i++ ) {
        printf("%d ", *p++);
        //printf("%d ", *(p+i));
    }
    printf("\n%d", p);
    printf("\n");

    return 0;
}
