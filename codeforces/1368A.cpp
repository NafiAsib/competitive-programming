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
    long long fib[1000];
    fib[0] = 1LL;
    fib[1] = 1LL;
    fib[2] = 2LL;
    int i = 3;
    for(; i<44; i++) {
        fib[i] = fib[i-1]+fib[i-2];
    }

    int tc;
    cin >> tc;
    while(tc--) {
        long long a, b, n;
        cin >> a >> b >> n;
        long long t = max(a,b);
        b = min(a, b);
        a = t;

        for(i=1; i<44; i++) {
            if(fib[i]*a + fib[i-1]*b > n) {
                cout << i << "\n";
                break;
            }
        }
    }
    return 0;
}
