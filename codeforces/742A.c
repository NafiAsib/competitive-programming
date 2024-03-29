#include <stdio.h>

int bigmod(int a, int b, int M);

int main()
{
    int a, b, M;

    //a = 1378;
    //M = 10;

    scanf("%d %d %d", &a, &b, &M);

    int res = bigmod(a, b, M);

    printf("%d", res);

    return 0;

}

int bigmod(int a, int b, int M)
{
    if(b == 0) return 1%M;
    int x = bigmod(a, b/2, M);
    x = (x * x) % M;
    if(b % 2 == 1) x = (x * a) % M;
    return x;
}