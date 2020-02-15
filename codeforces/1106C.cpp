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

int main()
{
    int n;
    cin>>n;
    int ara[n+2];
    for(int i = 0; i < n; i++) cin>>ara[i];
    sort(ara, ara+n);
    ll ans = 0;
    int j = n-1;
    for(int i = 0; i < n/2; i++) {
        ans += (ara[i]+ara[j]) * (ara[i]+ara[j]);
        j--;
    }
    cout<<ans<<endl;
    return 0;
}