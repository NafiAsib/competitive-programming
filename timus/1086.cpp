#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int primes[15001];

int main()
{
    int i, j, k = 2, n, T, c = 0, sq;

    primes[0] = 2;
    primes[1] = 3;

    for(i = 4; i <= 164000; i++)
    {
        sq = sqrt(i);
        for(j = 2; j <= sq; j++)
        {
            if (i%j == 0)
            {
                c = 1;
                break;
            }
        }

        if(c == 0)
        { 
            primes[k] = i;
            k++;
        }
        c = 0;
    }

    cin>>T;

    while(T--)
    {
        cin>>n;
        cout<<primes[n-1]<<endl;
    }

    return 0;
}