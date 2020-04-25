#include <bits/stdc++.h>
#define watch(x) cerr << #x << " = " << x << "\n"
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
	    freopen("../io/in.txt", "r", stdin);
	    // freopen("../io/out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    int tc;
    cin>>tc;
    while(tc--) {
        int n, k;
        cin>> n >> k;
        int a = n/k;
        int ans = a*k;
        ans += min(k/2, (n-ans));
        cout << ans << "\n";
    }
    return 0;
}
