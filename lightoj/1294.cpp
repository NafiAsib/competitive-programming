/*-------------- Bismillahir Rahmanir Rahmin --------------*/
//
#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define endl "\n"
#define off() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fr freopen("in.txt", "r", stdin)
#define fw freopen("out.txt", "w", stdout)
#define pb push_back
#define eb emplace_back
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl

typedef long long ll;
typedef unsigned int ui;
//Variables
//const double pi = 2*acos(0.0);

int main()
{
    //fr; fw;
    int tc;
    ll ans, n, m;
    scanf("%d", &tc);
    int k = 0;
    while(tc--) {
        ans = 0;
        sf("%lld %lld", &n, &m);
        ans = (n*m)/2;
        pf("Case %d: %lld\n", ++k, ans);
    }

    return 0;
}