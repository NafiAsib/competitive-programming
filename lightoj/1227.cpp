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
    int i, j, tc, n, p, q;
    cin>>tc;
    int k = 0;
    while(tc--) {
        cin>>n>>p>>q;
        int ara[n+2];
        for(i = 0; i < n; i++) cin>>ara[i];
        sort(ara, ara+n);
        int w = 0, cnt = 0, i = 0, w1 = 0, c1 = 0;
        while(w <= q && cnt <= p) {
            w1 = w;
            c1 = cnt;
            w += ara[i];
            cnt++;
            i++;
        }
        pf("Case %d: %d\n", ++k, c1);
    }

    return 0;
}