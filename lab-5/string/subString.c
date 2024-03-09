/* String -> Program-4
Write a C program to check whether a given substring is present in the given string.             Enter a string: This is a test string. Enter substring: string Expected Output: ‘string’ exists as a substring in the string.
*/
#include <stdio.h> 
#include <string.h> 
 
int main() { 
    char str[100], substr[100]; 
    int i, j, found; 
 
    printf("Enter a string: "); 
    fgets(str, sizeof(str), stdin); 
 
    printf("Enter substring: "); 
    fgets(substr, sizeof(substr), stdin); 
 
    // Remove newline characters from inputs 
    str[strcspn(str, "\n")] = '\0'; 
    substr[strcspn(substr, "\n")] = '\0'; 
 
    for (i = 0; str[i] != '\0'; i++) { 
        found = 1; 
        for (j = 0; substr[j] != '\0'; j++) { 
            if (str[i + j] != substr[j]) { 
                found = 0; 
                break; 
            } 
        } 
        if (found == 1) { 
            printf("Expected Output: '%s' exists as a substring in the string\n", substr); 
            return 0; 
        } 
    } 
 
    printf("Expected Output: '%s' does not exist as a substring in the string\n", substr); 
 
    return 0; 
}