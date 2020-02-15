#include <bits/stdc++.h>

using namespace std;

int ara[101];

int main()
{
    int n, i, odd = 0, even = 0;
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cin>>ara[i];
    }
    for(i = 0; i < n; i++)
    {
        if(ara[i]%2 == 0)
            even++;

        else
            odd++;
    }
    for(i = 0; i < n; i++)
    {
        if(odd > even)
        {
            if(ara[i]%2 == 0)
            {
                printf("%d", i+1);
                break;
            }
        }
        else if(even > odd)
        {
            if(ara[i]%2 != 0)
            {
                printf("%d", i+1);
                break;
            }
        }
    }

    return 0;
}