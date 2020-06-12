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
    
        int64 n, k;
        cin >> n >> k;
        int64 mn, mx;
        int64 x;
        //bool found = false;
        for(int i=1; i<k; i++) {
            mn = inf;
            mx = 0;
            x = n;
            while(x > 0) {
                mn = min(mn, x%10);
                x /= 10;
            }
            x = n;
            while(x > 0) {
                mx = max(mx, x%10);
                x /= 10;
            } 
            n = n+(mn*mx);
            if(mn == 0) {
                //found = true;
                break;
            }
            //watch(mn);
            //watch(mx);
            //cout<<i+2<<" = "<<n<<"\n";
        }
        cout<<n<<"\n";
    }
    return 0;
}

