#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
typedef pair<int, int> pii;
typedef long long int64;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;
const long long linf = 0x3f3f3f3f3f3f3f3fLL;

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
        int a[n+1];
        for(int i=0; i<n; i++) cin>>a[i];
        sort(a,a+n);
        int ans = inf;
        for(int i=0; i<n-1; i++) ans = min(ans, a[i+1]-a[i]);
        cout << ans << "\n";
    }
    return 0;
}

