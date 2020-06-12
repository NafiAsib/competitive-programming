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
        int n, x;
        cin >> n >> x;
        int o = 0, e = 0;
        int a;
        for(int i=0; i<n; i++) {
            cin >> a;
            if(a&1) o++;
            else e++;
        }

        if(o == 0) cout<<"No\n";
        else if(e == 0 && !(x&1)) cout<<"No\n";
        else {
            x -= e;
            if(x <= 0) cout << "Yes\n";
            else if(x&1 && o>=x) cout <<"Yes\n";
            else if(!(x&1) && o>x) cout<<"Yes\n";
            else cout<<"No\n";
        }
    }

    return 0;
}

