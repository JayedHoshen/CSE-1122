/* Pointer -> Program-5(d)
Write a program to print the reverse of a string.
*/
#include<stdio.h>

/*====----------Function Signature---------====*/
int strLength(char s[]);
void reverseString(char *str, int n);

int main(){
    char str[1000];
    int n;

    printf("Enter a string = ");
    scanf("%[^\n]*s", &str);

    n = strLength(str);
    reverseString(str, n);

    return 0;
}

/*====----------String Length---------====*/
int strLength(char s[]) {
    int i = 0, len = 0;
    while(s[i] != '\0') {
        len++;
        i++;
    }
    return len;
}

/*====----------Reverse a String---------====*/
void reverseString(char *str, int n) {
    for(int i = n-1; i>=0; i--){
        printf("%c", *(str+i));
    }
}
