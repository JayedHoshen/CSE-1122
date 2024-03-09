/* Pointer -> Program-8
Write a program to dynamically allocate a two dimensional (m*n) array. 
Take the dimensions m and n as input.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int r, c;
    printf("Enter row size = ");
    scanf("%d", &r);
    printf("Enter column size = ");
    scanf("%d", &c);

	int *ptr = malloc((r * c) * sizeof(int)); // memory allocate

	for (int i = 0; i < (r*c); i++) ptr[i] = i + 1;

	// Accessing the array values as if it was a 2D array
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) printf("%d ", ptr[i*c+j]);
		printf("\n");
	}

	free(ptr);

	return 0;
}
