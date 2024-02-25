#include <stdio.h>

int strLength(char s[]);
void isPalindrome(char s[]);
void reverseString(char s[]);

int main()
{
    char str[500];
    printf("Enter a string = ");
    scanf("%[^\n]*s", &str);


    return 0;
}

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

int strLength(char s[]) {
    int i = 0, len = 0;
    while(s[i] != '\0') {
        len++;
        i++;
    }
    return len;
}

/*
#include <stdio.h>

int strLength(char s[]);
void isPalindrome(char s[]);
void swapFnc();

int main()
{
    char str[100];

    printf("Enter a string = ");
    scanf("%[^\n]*s", &str);

    isPalindrome(str);
    swapFnc();

    return 0;
}

void strInput() {

}

void swapFnc() {
    int *n1, *n2, a, b;

    printf("Enter two number = ");
    scanf("%d %d", &a, &b);
    printf("Before swap: a = %d,\tb = %d\n", a, b);

    n1 = &a;
    n2 = &b;

    *n1 = *n1+*n2 - (*n2 = *n1);
    printf("After swap: a = %d,\tb = %d\n", a, b);
}

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

int strLength(char s[]) {
    int i = 0, len = 0;
    while(s[i] != '\0') {
        len++;
        i++;
    }
    return len;
}

#include <stdio.h>

int main()
{
    char str[100];
    int alp = 0, digit = 0, spCh = 0, i = 0;

    printf("Enter a string = ");
    scanf("%[^\n]*s", &str);

    while(str[i] != '\0') {
        if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') alp++;
        else if(str[i] >= '0' && str[i] <= '9') digit++;
        else spCh++;

        i++;
    }

    printf("Alphabet = %d,\tDigit = %d,\tSpecial Character = %d\n", alp, digit, spCh);

    return 0;
}
*/
