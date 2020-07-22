#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr <<"\e[91m"<<__func__<<": "<< #x << " = " << x <<"\e[39m"<< "\n"
typedef unsigned long long ll;
const int maxn = 1e7+2;
int a[maxn];

int main()
{
#ifndef ONLINE_JUDGE
    // freopen("../io/in.txt", "r", stdin);
    //freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    ll ans = 0LL;
    
    int n;
    cin >> n;

    for(int i=1; i<=n; i++) {
        for(int j=i; j<=n; j += i) a[j]++;
    }

    // for(int i=1; i<=n; i++) watch(a[i]);

    for(ll i=1; i<=n; i++) ans += (i*(ll)a[i]);

    cout << ans << "\n";

    return 0;
}
