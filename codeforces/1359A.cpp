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
        int n, m, k;
        cin >> n >> m >> k;
        int nk = n/k;
        if(n/k >= m) cout << m << "\n";
        else if(n/k < m) {
            m = m-nk;
            k = k-1;
            int mod = (m/k);
            if(m%k != 0) mod = (m/k)+1; 
            cout <<(nk)-mod<<"\n";

        }
    }
    return 0;
}

