/* String -> Program-2
Write down a program that will take a word as input and will determine whether the 
word is palindrome or not.
*/
#include <stdio.h>

/*====----------Function Signature---------====*/
int strLength(char s[]);
void isPalindrome(char s[]);

int main()
{
    char str[1000];

    printf("Enter a string = ");
    scanf("%[^\n]*s", &str);

    isPalindrome(str);

    return 0;
}

/*====----------Palindrome Check---------====*/
void isPalindrome(char s[]) {
    int n = strLength(s);
    for(int i = 0; i <= n/2; i++) {
        if(s[i] != s[n-1-i]) {
            printf("Not palindrome\n");
            return;
        }
    }
    printf("Palindrome\n");
}

/*====----------String Length Calculation---------====*/
int strLength(char s[]) {
    int i = 0, len = 0;
    while(s[i] != '\0') {
        len++;
        i++;
    }
    return len;
}