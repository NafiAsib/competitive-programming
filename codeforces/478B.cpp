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
    int64 n, m;
    cin >> n >> m;
    int64 kmin, kmax;
    kmax = (n-m+1)*(n-m);
    kmax /= 2;

    
    if(n%m == 0) {
        int64 h = n/m;
        kmin = h*(h-1);
        kmin /= 2;
        kmin *= m;
    }
    else {
        int64 extra = n%m;
        // watch(extra);
        int64 h = n/m;
        // watch(h);
        kmin = (h*(h+1))/2;
        // watch(kmin);
        kmin *= extra;
        // watch(kmin);
        extra = (m)-extra;
        // watch(extra);
        kmin += ((h*(h-1))/2)*extra;
    }
    
    cout << kmin << " " << kmax << "\n";
    return 0;
}
