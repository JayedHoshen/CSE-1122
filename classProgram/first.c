// 1+11+111+1111+......+111111
#include <stdio.h>

int main()
{
    int i, n;

    printf("Please enter value of n = ");
    scanf("%d", &n);


    return 0;
}

/*

    // 3 12 48 ..... upto nth term
    #include <stdio.h>
    #include <math.h>

    int main()
    {
        int i, n;

        printf("Please enter value of n = ");
        scanf("%d", &n);

        for (i = 3; i <= (pow(4,n-1)*3); i*=4) {
            printf("%d ", i);
        }

        return 0;
    }

    // 1 2 4 8 16 ..... upto nth term
    #include <stdio.h>
    #include <math.h>

    int main()
    {
        int i, n;

        printf("Please enter value of n = ");
        scanf("%d", &n);

        for (i = 1; i <= pow(2,n-1); i*=2) {
            printf("%d ", i);
        }

        return 0;
    }

    // 100 97 94 ..... upto all positive term
    #include <stdio.h>

    int main()
    {
        int i, n=100;

        for (i = 100; i > 0; i-=3) {
            printf("%d ", i);
        }

        return 0;
    }

    // 4 7 10 13 16 ..... upto nth term
    #include <stdio.h>

    int main()
    {
        int i, n;

        printf("Please enter value of n = ");
        scanf("%d", &n);

        for (i = 4; i <= (3*n+1); i+=3) {
            printf("%d ", i);
        }

        return 0;
    }


    // 1 3 5 7 .... upto nth term
    #include <stdio.h>

    int main()
    {
        int i, n;

        printf("Please enter value of n = ");
        scanf("%d", &n);

        for (i = 1; i <= (2*n-1); i+=2) {
            printf("%d ", i);
        }

        return 0;
    }

    // print "DUET"
    #include <stdio.h>

    int main()
    {
        int i, n;

        printf("Enter value of n = ");
        scanf("%d", &n);

        for (i = 1; i <= n; i++) {
            printf("%d.DUET\n", i);
        }

        return 0;
    }
*/
