#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //  freopen("out.txt", "w", stdout);
    ll n, half, num, m, ans;

    cin>>n>>m;
    half = (ll)n/2;

    if(n%2 == 0) {
        if(half >= m) ans = (m*2)-1;
        else ans = m*2-n;
    }

    else {
        if(half == m-1) ans = n; 
        else if (half >= m) ans = (ll)(m*2)-1;
        else if(half < m) ans = (m*2)-(n+1);
    }

    cout<<ans<<endl;
    return 0;
}