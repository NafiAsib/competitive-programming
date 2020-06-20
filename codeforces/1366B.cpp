#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr << #x << " = " << x << "\n"
typedef pair<int, int> pii;
typedef long long int64;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("../io/in.txt", "r", stdin);
    //freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int tc;
    cin >> tc;
    while(tc--) {
        int n, x, m;
        cin >> n >> x >> m;
        bool first = false;
        pii ans;
        ans.first = -1;
        int a, b;
        for(int i=0; i<m; i++) {
            cin >> a >> b;
            if(!first) {
                if(a <= x && b >= x) {
                    first = true;
                    ans.first = a;
                    ans.second = b;
                }
            }
            else {
                if(a < ans.first && b > ans.second) {
                    ans.first = a;
                    ans.second = b;
                }
                else if(a < ans.first && b >= ans.first) ans.first = a;
                else if(a <= ans.second && b > ans.second) ans.second = b;
            }
        }

        int res = 0;
        if(ans.first == -1) res = 1;
        else res = (ans.second-ans.first)+1;

        cout << res << "\n";
    }
    return 0;
}
