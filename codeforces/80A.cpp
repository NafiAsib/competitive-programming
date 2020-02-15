#include <bits/stdc++.h>
using namespace std;

int ara[50];

int main()
{
    int i, j, count = 0, k = 1, n, m;
   
    ara[0] = 2;

    for(i = 3; i < 50; i++)
    {
        for(j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
                count += 1;
        }

        if(count == 0)
        {
            ara[k] = i;
            k++;
        }

        count = 0;
    }

    cin>>n>>m;
    
    for(i = 0; i < k; i++)
    {
        if(ara[i] == n && ara[i+1] == m)
        {
            cout<<"YES"<<endl;
            break;
        }

        else if(ara[i] == n && ara[i+1] != m)
        {
            cout<<"NO"<<endl;
            break;
        }
    }

    return 0;
}
