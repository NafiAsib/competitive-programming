#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, i, n = 0;
    long long W, N, M, MN, j, k;

    cin>>T;

    for(i = 1; i <= T; i++)
    {
        cin>>W;

        n = 0;

        if(W%2 != 0)
        {
            printf("Case %d: Impossible\n", i);
            continue;
        }

        N = W;

        while(N%2 == 0)
        {
            N = N/2;
        }

        for(j = N; j >= 0; j = j-2)
        {
            for(k = 2; k <= W/2; k=k+2)
            {
                MN = j*k;

                if(MN == W)
                {
                    printf("Case %d: %lld %lld\n", i, j, k);
                    n = 5;
                    break;
                }
            }
            if(n == 5) break;
        }
    }

    return 0;
}