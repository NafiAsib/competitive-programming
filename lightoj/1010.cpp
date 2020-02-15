#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, i, m, n, mn, x, ans;
    cin>>T;
    
    for(i = 1; i <= T; i++)
    {
        cin>>m>>n;

        mn = m * n;

        if(m == 1 || n == 1)
            ans = mn;

        else if(m == 2 || n == 2)
        {
            if(m == 2) x = n;
            else x = m;
            if(x%4 == 1)      ans = x+1;
            else if(x%4 == 2) ans = x+2;
            else if(x%4 == 3) ans = x+1;
            else if(x%4 == 0) ans = x;
        }

        else if(mn % 2 != 0)
            ans = ((m*n)/2)+1;

        else
            ans = ((m*n)/2);

        cout<<"Case "<<i<<": "<<ans<<endl;
    }

    return 0;
}