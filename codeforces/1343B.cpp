#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr <<"at line "<< __LINE__ <<", " << #x << " = " << x << "\n"
typedef pair<int, int> pii;
typedef long long ll;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;

const int maxn = 2e5+2;
int a[maxn];

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("../io/in.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        if((n/2)%2 !=0 ) {
            cout << "NO" << "\n";
            continue;
        }
        cout<<"YES"<<"\n";
        ll even = 0LL, odd = 0LL;
        int cnt = 2;
        int i;
        for(i=1; i<=n/2; i++) {
            even += (cnt*1LL);
            a[i] = cnt;
            cnt += 2;
        }
        cnt = 1;
        for(i=n/2+1; i<=n-1; i++) {
            odd += (cnt*1LL);
            a[i] = cnt;
            cnt += 2;
        }
        a[i] = even-odd;

        for(i=1; i<=n; i++) cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}
