/*  The marks to grade mapping in a certain university is as follows:
    A: 80-100%      B: 70-79%
    C: 60-69%       D: 50-59%
    F: 0-50%
Write a C program that will take the grade as input and output the grade percentage.
*/

#include <stdio.h>

int main()
{
    char gd;

    printf("Enter your Grade letter = ");
    scanf("%c", &gd);

    switch (gd) {
        case 'A':
            printf("80-100%%\n");
            break;
        case 'B':
            printf("70-79%%\n");
            break;
        case 'C':
            printf("60-69%%\n");
            break;
        case 'D':
            printf("50-59%%\n");
            break;
        case 'F':
            printf("0-50%%\n");
            break;
        default :
            printf("Invalid grade\n");
    }

    return 0;
}
