#include<stdio.h>

int main() {
    // string declaration
    char s0[] = {'h', 'e', 'l', 'l', 'o'};
    char s1[10] = {'h', 'e', 'l', 'l', 'o'}; // rest of are characters are initialized to zero
    char s2[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char s3[] = {'h', 'e', 'l', 'l', 'o', '\0', 'w', 'o', 'r', 'l', 'd'};
    char s4[11] = {'h', 'e', 'l', 'l', 'o', '\0', 'w', 'o', 'r', 'l', 'd'};
    char s5[] = "hello world";
    // print character by character
    int i = 0;
    while(s5[i] != '\0') {
        printf("%c", s5[i]);
        i++;
    }
    printf("\n");
    // print using %s in printf
    printf("%s\n", s0);
    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%s\n", s3);
    printf("%s\n", s4);
    printf("%s\n", s5);
    return 0;
}