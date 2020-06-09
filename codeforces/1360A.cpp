#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
typedef pair<int, int> pii;
typedef long long int64;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;
const long long linf = 0x3f3f3f3f3f3f3f3fLL;

int main()
{
    #ifndef ONLINE_JUDGE
	    freopen("../io/in.txt", "r", stdin);
	    //freopen("../io/out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    int tc;
    cin >> tc;
    while(tc--) {
        int a, b, t;
        cin >> a >> b;
        t = min(a,b);
        a = max(a, b);
        b = t;

        if(a == b) cout << 2*a*2*a << "\n";
        else if(2*b > a) cout << 4*b*b << "\n";
        else cout << a*a << "\n";
    }
    return 0;
}

