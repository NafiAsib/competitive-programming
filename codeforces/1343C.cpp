#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr <<"at line "<< __LINE__ <<", " << #x << " = " << x << "\n"
typedef pair<int, int> pii;
typedef long long ll;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;

const int maxn = 2e5+2;
int a[maxn];

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("../io/in.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        for(int i=0; i<n; i++) cin >> a[i];
        //int sign = 1;
        int mx = 0;
        ll ans = 0LL;
        for(int i=0; i<n; i++) {
            if(a[i] < 0) {
                mx = a[i];
                while(a[i] < 0 && i<n) {
                    mx = max(mx, a[i]);
                    i++;
                }
            }
            else {
                mx = a[i];
                while(a[i] > 0 && i<n) {
                    mx = max(mx, a[i]);
                    i++;
                }
            }
            ans += (mx*1LL);
            i--;
        }
        
        cout << ans << "\n";
    }

    return 0;
}
