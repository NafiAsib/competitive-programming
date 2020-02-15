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
    int n;
    cin>>n;
    char ara[n+2];
    for(int i = 0; i < n;i++) cin>>ara[i];
    int ans = 0;
    for(int i = 0; i<n; i++) {
        if(ara[i] == '-') ans--;
        else ans++;
        if(ans < 0 ) ans = 0;
    }
    cout<<ans<<endl;    
    return 0;
}