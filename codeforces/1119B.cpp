#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define endl "\n"
#define dbg(c) printf("IN %d\n", c);
#define off ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fr freopen("in.txt", "r", stdin)
#define fw freopen("out.txt", "w", stdout)
#define pb push_back
#define eb emplace_back
#define PII pair<int, int>
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl

typedef long long ll;
typedef unsigned int ui;

int main()
{
    off;
    //fr;
    int n;
    ll h;
    cin>>n>>h;
    int ara[n+2];
    for(int i = 0; i < n; i++) cin>>ara[i];
    int arr[n+2];
    int ans = 0, hi = n, lo = 0, mid;
    ll ht = 0;
    while(lo<=hi) {
        mid = (lo+hi)/2;
        ht = 0;
        for(int i = 0; i < mid; i++) arr[i] = ara[i];
        sort(arr, arr+mid);
        for(int i = mid-1; i >= 1; i-=2) ht += arr[i];
        if(mid%2) ht += arr[0];
        if(ht<=h)
            ans = max(ans, mid), lo = mid+1;
        else hi = mid-1;
    }
    cout<<ans<<endl;
    return 0;
}