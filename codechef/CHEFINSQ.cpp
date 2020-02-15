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
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
#define pass(x) cout<<"Passed step "<<(x)<<endl

typedef long long ll;
typedef unsigned int ui;
typedef pair<int, int> pii;
int mod = 1000000007; //10^9+7
const double eps = 1e-9;
//const double pi = 2*acos(0.0);
//int fx[]={+1,-1,+0,+0};
//int fy[]={+0,+0,+1,-1};
//int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
//int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};

int main()
{
    ll dp[52][52];
    dp[0][0] = 1;
    for(int i=1; i<52; i++) {
        dp[i][0] = 1;
        for(int j=1; j<52; j++) dp[i][j] = dp[i-1][j]+dp[i-1][j-1];
    }
    int tc;
    cin>>tc;
    while(tc--) {
        int n, k;
        cin>>n>>k;
        int ara[n+2], cnt[102];
        memset(cnt, 0, sizeof cnt);
        for(int i=0; i<n; i++) {
            cin>>ara[i];
            cnt[ara[i]]++;
        }
        sort(ara, ara+n);
        int rept = 0, p = k-1;
        while(ara[p] == ara[k-1]) {
            rept++;
            p--;
        }
        cout<<dp[cnt[ara[k-1]]][rept]<<endl;
    }
    return 0;
}