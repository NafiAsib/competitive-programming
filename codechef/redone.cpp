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
const int lim = 1000007;
ll v[lim];
int mod = 1000000007;

int main()
{   
    ll res = 1;
    v[1] = 1;
    //v[2] = 2;
    for(ll i = 2; i < lim; i++) {
        res = (v[i-1]*i)%mod;
        v[i] = res;
    }
    //pass;
    //for(int i = 1; i<6; i++)cout<<v[i]<<" ";
    int tc;
    cin>>tc; 
    for(int z = 0; z < tc; z++) {
        ll n;
        cin>>n;
        cout<<v[n+1]-1<<endl;
    }
    return 0;
}