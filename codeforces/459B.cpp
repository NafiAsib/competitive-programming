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
const int sz = 2e5+2;
int a[sz];
int main()
{
    ll n;
    cin>>n;
    int mx = 0, occur = 0, mn = INT_MAX, occ = 0;
    for(int i = 0; i < n; i++) 
    {
        cin>>a[i];
        if(mx < a[i]) {
            mx = a[i];
            occur = 1;
        }
        else if(mx == a[i]) occur++;
        if(mn > a[i]) {
            mn = a[i];
            occ = 1;
        }
        else if(mn == a[i]) occ++;

    }
    if(mn == mx) {
        long long ans;
        ans = (n*(n-1))/2;
        cout<<"0 "<<ans<<endl;   
    }
    else {
        sort(a, a+n);
        int diff = a[n-1] - a[0];
        ll cnt = 0;
        ll ans;
        for(int i = 0; i < n-1; i++)
            if(a[n-1] - a[i] == diff) cnt++;
        
        ans = cnt*occur;
        cout<<diff<<" "<<ans<<endl;
    }
    return 0;
}