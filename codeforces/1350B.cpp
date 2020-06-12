#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
typedef pair<int, int> pii;
typedef long long int64;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;
const long long linf = 0x3f3f3f3f3f3f3f3fLL;

const int maxn = 1e5+2;
int a[maxn];
int dp[maxn];

int main()
{
    #ifndef ONLINE_JUDGE
	    freopen("../io/in.txt", "r", stdin);
	    //freopen("../io/out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        for(int i=1; i<=n; i++) cin >> a[i];
        for(int i=1; i<=n; i++) dp[i] = 1;

        for(int i=1; i<=n; i++) 
            for(int j=i*2; j<=n; j+=i) 
                if(a[j] > a[i]) 
                    dp[j] = max(dp[j], dp[i]+1);

        int ans = 0;
        for(int i=1; i<=n; i++) ans = max(ans, dp[i]);

        cout << ans <<"\n";
    }
    return 0;
}

