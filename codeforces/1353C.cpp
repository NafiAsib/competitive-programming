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
        int64 n;
        cin >> n;
        int64 ans = 0;
        while(n>0) {
            ans += (n+n+n-2+n-2)*(n/2);
            //watch((n+n+n-2+n-2)*(n/2));
            //watch(ans);
            n -= 2;
        }
        cout << ans <<"\n";
    }
    return 0;
}

