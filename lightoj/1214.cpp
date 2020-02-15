/*-------------- Bismillahir Rahmanir Rahmin --------------*/
// Modular Arithmatic
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

int main()
{
    fr; fw;
    int i;
    ll n, tc, d, j;
    ll b;
    string a;
    cin >> tc;
    for(i = 1; i <= tc; i++) {
        cin >> a;
        cin >> b;
        if(b<0) b = b*(-1);
        j = 0;
        d = 0;
        int len = a.size();
        if(a[0] == '-') j++;
        for(; j < len; j++) {
            d = (d*10)+(a[j]-'0');
            d = d%b;
        }
        if(d==0) pf("Case %d: divisible\n", i);
        else pf("Case %d: not divisible\n", i);
        a.clear();
    }

    return 0;
}