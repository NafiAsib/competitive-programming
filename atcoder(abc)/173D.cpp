#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr <<"\e[91m"<<__func__<<": "<< #x << " = " << x <<"\e[39m"<< "\n"
typedef pair<int, int> pii;
typedef long long ll;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;

const int maxn = 2 * 1e5;
int a[maxn+1];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../io/in.txt", "r", stdin);
    //freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n, greater<int>());
    ll ans = 0LL;
    // for(int i=0; i<n; i++) watch(a[i]);
    ans += a[0];
    int idx = 1, cnt = 0;
    for(int i=2; i < n; i++) {
        ans += a[idx];
        cnt += 1;
        if(cnt == 2) {idx += 1; cnt = 0;}
    }

    cout << ans << "\n";
    return 0;
}
