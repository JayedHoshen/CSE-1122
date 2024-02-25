/*Problem-3:
An integer is entered through the keyboard. Write a function to obtain the prime factors of this number. For example, prime factors of 24 are 2, 2, 2 and 3 whereas prime factor of 35 are 5 and 7. 
*/

#include <stdio.h>

int isPrime(int n);

int main()
{
    int num;

    printf("Enter an integer number that calculate prime factors = ");
    scanf("%d", &num);

    printf("%d\'s prime factors is = ", num);
    for(int i = 2; i <= num; i++) {
        if(num%i == 0) {
            if(isPrime(i)) printf("%d ", i);
        }
    }

    return 0;
}

int isPrime(int n) {
    if(n < 1) return 0;
    if(n <= 3) return 1;
    if(n%2 == 0 || n%3 == 0) return 0;
    for(int i = 5; i*i <= n; i+=6) {
        if(n%i == 0 || n%(i+2) == 0) return 0;
    }
    return 1;
}