#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr << #x << " = " << x << "\n"
typedef pair<int, int> pii;
typedef long long int64;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;

const int maxn = 2e5+5;
int a[maxn], b[maxn], pos[maxn];
map<int, int> rotation;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../io/in.txt", "r", stdin);
    //freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) {
        cin >> a[i];
    }
    for(int i=1; i<=n; i++) {
        cin >> b[i];
        pos[b[i]] = i;
    }
    int x;
    for(int i=1; i<=n; i++) {
        x = pos[a[i]] - i;
        if(x < 0) x = n+x;
        rotation[x]++;
    }
    int ans = 0;
    for(auto i:rotation) ans = max(ans, i.second); 
    cout << ans << "\n";

    return 0;
}
