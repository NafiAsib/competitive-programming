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
        long long a, b;
        cin >> a >> b;
        if(a < b) swap(a,b);
        int res = 0;
        if (a == b) res = 0;
        else if(a%b != 0 || (a&1)) res = -1;
        else {
            long long n = a/b;
            while(n%8 == 0) {
                n /= 8;
                res++;
            }
            while(n%4 == 0) {
                n /= 4;
                res++;
            }
             while(n%2 == 0) {
                n /= 2;
                res++;
            }
            if(n != 1) res = -1;
        }
        cout << res << "\n";
    }
    return 0;
}
