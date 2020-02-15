#include <stdio.h>

int gcd(int a, int b);

int main()
{
    int a, b, n, k, turn = 0;
    scanf("%d %d %d", &a, &b, &n);
    while(1)
    {
        if(turn == 0 || turn%2 == 0)
        {
            k = gcd(a, n);
            if(k > n)
            {
                printf("1");
                break;
            }
            n = n - k;
        }

        else
        {
            k = gcd(b, n);
            if(k > n)
            {
                printf("0");
                break;
            }
            n = n - k;
        }

        turn++;


    }

    return 0;
}

int gcd(int a, int b)
{
    int t;
    while(b != 0)
    {
        t = b;
        b = a%b;
        a = t;
    }
    //printf("%d", a);

    return a;
}