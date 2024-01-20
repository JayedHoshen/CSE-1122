#include <stdio.h>

int main() {
    int x, n1, n2, n3, lcm, gcd;

    printf("Enter three numbers = ");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    x = (n1 < n2) ? (n1<n3 ? n1 : n3) : (n2<n3 ? n2 : n3);
    for ( ; x >= 1; x--){
        if (n1 % x == 0 && n2 % x == 0 && n3 % x == 0) {
            gcd = x;
            break;
        }
    }   
    lcm = (n1*n2*n3) / gcd;

    printf("GCD is: %d\nLCM is: %d\n", gcd, lcm);

    return 0;
}