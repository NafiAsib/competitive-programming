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
    // freopen("../io/in.txt", "r", stdin);
    // freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int n;
    while(cin >> n) {
        int x, y, a;
        cin >> x;
        int left = n-1;
        bool vis[n+2] = {0};
        vis[0] = 1;

        for(int i=1; i<n; i++) {
            cin >> y;
            // watch(x);
            a = abs(x-y);
            if(a <= n-1 && vis[a] == 0) {
                vis[a] = 1;
                left--;
            }
            x = y;
        }
        // watch(sum);
        if(left == 0) cout << "Jolly\n";
        else cout << "Not jolly\n";
    }
    return 0;
}
