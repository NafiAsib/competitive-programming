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

vector<ll>v;

int main()
{
    ll l, r, res, j;
    cin>>l>>r;
    res = (r-l+1);
    //watch(res);
    //memset(used, 0, sizeof used);
    /* for(ll i = l; i<=r; i+=2) {
        j = i+1;
        v.pb(i);
        v.pb(j);
    } */
    //watch(v.size());

    //for(int i = 0; i < v.size(); i+=2) { int j = i+ 1; cout<<v[i]<<" "<<v[j]<<endl;}
    
    /* if(v.size() == res) {
        cout<<"YES"<<endl;
        int len = v.size();
        for(int i = 0; i < len; i+=2) {
            int j = i+1;
            cout<<v[i]<<" "<<v[j]<<endl;
        }
    }
    else cout<<"NO"<<endl; */
    cout<<"YES"<<endl;
    for(ll i = l; i<=r; i+=2) {
        j= i+1;
        cout<<i<<" "<<j<<endl;
    }
    return 0;
}