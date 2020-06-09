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
        int n, k;
        cin >> n >> k;
        vector< int > div;
        int root = sqrt(n);
        for(int i=1; i<=root; i++) {
            if(n%i == 0) {
                div.push_back(i);
                if(n/i != i) div.push_back(n/i);
            }
        }
        int ans = inf;
        //for(auto i:div) cout<<i<< " ";
        //cout<<"\n";
        for(auto i:div) if(i<=k) ans = min(ans, n/i);
        cout << ans << "\n";
    }
        
    return 0;
}

