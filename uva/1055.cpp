#include <bits/stdc++.h>

using namespace std;

#define watch(x) cout<<(#x)<<" is "<<(x)<<"\n"
#define endl "\n"

typedef long long ll;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(NULL);
    ll a, b;
    while(scanf("%lld %lld", &a, &b)==2)
    {
        cout<<abs(a-b)<<endl;
    }

    return 0;
}