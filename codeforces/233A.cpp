#include <bits/stdc++.h>

using namespace std;

int main()
{
    //vector< int > ara;
    int ara[101];
    int n, i, a, t;
    
    cin>>n;

    if(n % 2 != 0) 
    {
        cout<<"-1"<<endl;
        return 0;
    }

    for(i = 1; i <= n; i++)
    {
        if(i%2 == 0)
            ara[i-1] = i;

        else if(i%2 != 0)                            //&& i != n
            ara[i+1] = i;
        /*else if(i%2 != 0 && i == n)
        {
            t = ara[i - 1];
            ara[i - 1] = i;
            ara[i] = t;
        }*/
    }

    for(i = 1; i <=n; i++)
        cout<<ara[i]<<" ";


    return 0;
}