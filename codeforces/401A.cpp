#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define endl "\n"
#define dbg(c) printf("in %d\n", c);
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
    //fr;
    int n, x;
    cin>>n>>x;
    int ara[n+2];
    for(int i = 0; i < n; i++) cin>>ara[i];
    int sum = accumulate(ara, ara+n, 0);
    sum = abs(sum);
    int ans = (sum/x)+((sum%x) != 0);
    cout<<ans<<endl;
    return 0;
}