/* String -> Program-1 
Write a program in C which will take a string as input and count total number of alphabets, digits and special characters in a string.
*/
#include <stdio.h>

int main()
{
    char str[1000];
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