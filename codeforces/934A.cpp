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
    int n, m;
    cin >> n >> m;
    long long a[n+2], b[m+2];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int j=0; j<m; j++) cin >> b[j];
    long long first, second, per;
    first = LLONG_MIN;
    second = LLONG_MIN;

    for(int i=0; i<n; i++) {
        per = a[i]*b[0];
        for(int j=0; j<m; j++) per = max(per, a[i]*b[j]);

        if( per > first) {
            second = first;
            first = per;
        }
        else if( per > second) second = per;
    }
    cout << second << "\n";
    return 0;
}
