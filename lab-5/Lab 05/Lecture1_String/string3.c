#include<stdio.h>

int main() {
    char s[80]; // declare an empty string with capacity 80 
    printf("Enter first string: ");
    gets(s); // scan a single line
    printf("You entered: %s\n", s);
    return 0;
}