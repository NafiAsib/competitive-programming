#include <stdio.h>

long long int bigmod(long long int B, long long int P, long long int M);

int main()
{
    long long int B, P, M;
    while(scanf("%lld %lld %lld", &B, &P, &M) == 3)
    {
        long long int res = bigmod(B, P, M);
        printf("%lld\n", res);
    }

    return 0;
}

long long int bigmod(long long int B, long long int P, long long int M)
{
    if(P == 0) return 1%M;
    long long int x = bigmod(B, P/2, M);
    x = (x * x) % M;
    if(P%2 == 1) x = (x * B) % M;
    return x;
}