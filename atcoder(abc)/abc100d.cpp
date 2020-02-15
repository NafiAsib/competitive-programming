#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define endl "\n"
#define off ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fr freopen("in.txt", "r", stdin)
#define fw freopen("out.txt", "w", stdout)
#define pb push_back
#define eb emplace_back
#define PII pair<int, int>
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
#define pass printf("Passed Here\n")

typedef long long ll;
typedef unsigned int ui;
int mod = 1000000007;

int main()
{
    int n,m;
    cin>>n>>m;
    ll ara[n+2][4];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++)
            cin>>ara[i][j];
    }
    ll sum = 0, ans = 0; 
    for(int i = 0; i < 8; i++) {
        vector<ll>v;
        ll s = 0;
        for(int k = 0; k < n; k++) {
            for(int j = 0; j < 3; j++) {
                if(i&(1<<j)) s += ara[k][j];
                else s+= -ara[k][j];
            }
            v.pb(s);
            s = 0;
        }
        sort(v.begin(), v.end()); reverse(v.begin(), v.end());
        sum = 0;
        for(int x = 0; x < m; x++) sum += v[x];
        ans = max(ans, sum);
    }
    cout<<ans<<endl;
    return 0;
}