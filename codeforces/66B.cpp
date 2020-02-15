#include <bits/stdc++.h>

using namespace std;

int ara[1001];

int main()
{
    int i, j, n, low, hi = 0, ws = 0, max = 0;

    cin>>n;

    for(i = 0; i < n; i++)
    {
        cin>>ara[i];
    }

    for(i = 0; i < n; i++)
    {
        hi = i;

        low = ara[hi];

        for(j = hi; j >= 0; j--)
        {
            if(ara[j] <= low)
            {
                low = ara[j];
                ws++;
            }
            else if(ara[j] > low)
                break;
        }

        low = ara[hi];

        for(j = hi+1; j < n; j++)
        {
            if(ara[j] <= low)
            {
                low = ara[j];
                ws++;
            }
            else if(ara[j] > low)
                break;   
        }

        if(ws > max)
        {
            max = ws;
        }

        ws = 0;
        
    }

    /*low = ara[hi];

    for(i = hi; i >= 0; i--)
    {
        if(ara[i] <= low)
        {
            low = ara[i];
            ws++;
        }
        else if(ara[i] > low)
            break;
    }

    //cout<<ws<<endl;

    low = ara[hi];

    for(i = hi+1; i < n; i++)
    {
        if(ara[i] <= low)
        {
            low = ara[i];
            ws++;
        }
        else if(ara[i] > low)
            break;   
    }*/

    cout<<max<<endl;

    return 0;
}