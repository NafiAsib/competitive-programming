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
        int64 a, b, c, d;
        cin >> a >> b >> c >> d;
        if(b >= a) cout<<b<<"\n";
        else if(d>=c) cout<<"-1\n";
        else {
            int64 x = a-b;
            int64 y = c-d;
            int64 z;
            if(x%y==0) z = x/y;
            else z = (x/y)+1;
            int64 ans = b+(z*c);
            cout<<ans<<"\n";
        }
    }
    return 0;
}

