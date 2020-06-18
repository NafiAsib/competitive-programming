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
        int a[n+2];
        int o = 0, e = 0;
        int cnt = 0;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            if(a[i]&1) o++;
            else e++;
            if((i&1) && !(a[i]&1)) cnt++;
        }
        int ans;
        int x = n/2;
        if(n&1) {
            if(e != x+1 || o != x) ans = -1;
            else ans = cnt;
        }
        else {
            if(o != x || e != x) ans = -1;
            else ans = cnt;
        }

        cout << ans << "\n";
    }        
    return 0;
}

