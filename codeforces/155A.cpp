#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ara[1001], i, n, j, best, worst, ap = 0;
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cin>>ara[i];
    }
    worst = ara[0];
    best= ara[0];
    for(i = 1; i < n; i++)
    {
        if(ara[i] < worst)
        {
            worst = ara[i];
            ap += 1;
        }
        else if(ara[i] > best)
        {
            best = ara[i];
            ap += 1;
        }
    }

    cout<<ap<<endl;

    return 0;
}