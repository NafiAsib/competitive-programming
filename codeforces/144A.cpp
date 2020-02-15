#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ara[101], i, j = 0, n;
    cin>>n;
    
    for(i = 0; i < n; i++)
    {
        cin>>ara[i];
    }

    int first = ara[0];
    int f = 0;

    for(i = 0; i < n; i++)
    {
        if(ara[i] > first)
        {
            first = ara[i];
            f = i;
        }
    }

    for(i = f; i > 0; i--)
    {
        ara[i] = ara[i-1];
    }

    ara[0] = first;

    //cout<<f<<endl;

    int last = ara[0];
    int l = 0;

    for(i = 0; i < n; i++)
    {
        if(ara[i] <= last)
        {
            last = ara[i];
            l = i;
        }
    }

    for(i = l + 1; i < n; i++)
    {
        ara[i-1] = ara[i];
        j++;
    }

    /*for(i = 0; i < n; i++)
    {
        cout<<ara[i];
    }*/

    //cout<<endl<<l<<j<<endl;

    cout<<f+j<<endl;
}