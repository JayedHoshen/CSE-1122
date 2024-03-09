/* String -> Program-3
Write down a function that compares two strings and returns 1 if they are same and 
returns 0 otherwise.
*/
#include <stdio.h>

/*====----------Function Signature---------====*/
void stringCompare(char *st1, char *st2);

int main()
{
    char str1[1000], str2[1000];

    printf("Enter First string = ");
    scanf("%[^\n]*s", &str1);

    printf("Enter Second string = ");
    scanf(" %[^\n]*s", &str2);

    // Function call
    stringCompare(str1, str2);

    return 0;
}

/*====----------Two String Compare---------====*/
void stringCompare(char *x, char *y) {
    int flag = 0;
    while (*x != '\0' || *y != '\0') {
        if (*x == *y) {
            x++;
            y++;
        }
        else if ((*x == '\0' && *y != '\0')|| (*x != '\0' && *y == '\0')|| *x != *y) {
            flag = 1;
            printf("Not equal Strings\n");
            break;
        }
    } 
    if (flag == 0) {
        printf("Equal Strings\n");
    }
}