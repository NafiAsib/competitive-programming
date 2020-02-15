#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n, a, b, ans = 0,x;

    cin>>n>>a>>b;

    if(a+b < n)
    {
        x = (n - a);

        if(x == b) ans = b;

        else ans = (n - (n - b)) + 1;
    }

    else
    {
        ans = n - a;
    }
    cout<<ans<<endl;

    return 0;
}