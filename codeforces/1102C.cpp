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
    int x, y, n;
    cin >> n >> x >> y;
    int a[n+2];
    int cnt = 0;
    for(int i=0; i<n; i++) {
        cin >> a[i];
        if(a[i] <= x) cnt++;
    }
    int res = 0;
    if(x > y) res = n;
    else {
        res = (cnt/2) + (cnt&1);
    }
    cout << res << "\n";
    return 0;
}
