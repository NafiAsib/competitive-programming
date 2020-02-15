#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ara[4], i, j, shoe = 0;
    for(i = 0; i < 4; i++)
    {
        cin>>ara[i];
    }
    for(i = 0; i < 3; i++)
    {
        //shoe = 0;
        for(j = i + 1; j <4; j++)
        {
            if(ara[i] == ara[j] && ara[i] != 0 && ara[j] != 0)
            {
                shoe++;
                ara[j] = 0;
            }
        }
    }

    cout<<shoe<<endl;

    return 0;
}