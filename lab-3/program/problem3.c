#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("How many numbers you need ? ");
    scanf("%d", &n);
    int ara[n];

    // input and print an array
    printf("Enter %d integer numbers = ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    printf("\n----Print with duplicate value-------- \n");
    for (i = 0; i < n; i++) {
        printf("%d ", ara[i]);
    }

    // remove duplicate value
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (ara[i] == ara[j]) {
                for(k = j; k < n; k++){
                    ara[k] = ara[k+1];
                }
                n--;
            }
        }      
    }

    // After remove duplicate value
    printf("\n----After remove duplicate value-------- \n");
    for (i = 0; i < n; i++) {
        printf("%d ", ara[i]);
    }

    return 0;
}