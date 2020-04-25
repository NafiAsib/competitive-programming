#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr <<"at line "<< __LINE__ <<", " << #x << " = " << x << "\n"
typedef pair<int, int> pii;
typedef long long ll;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;

const int maxn = 2e5+3;
int a[maxn];
int pref[maxn*2];
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("../io/in.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        for(int i=1; i<=n; i++) cin >> a[i];
        for(int i=1; i<=2*k+1; i++) pref[i] = 0;

        //vector < pii > pairs;
        map< int, int > zero;

        for(int i=1; i<=n/2; i++) {
            zero[a[i]+a[n-i+1]]++;
            int left = min(a[i], a[n-i+1])+1;
            int right = max(a[i],a[n-i+1])+k;

            pref[left] += 1;
            pref[right+1] -= 1;
        }

        for(int i=1; i<=2*k; i++) pref[i] += pref[i-1];

        int ans = n;
        int temp;
        for(int i=1; i<=2*k; i++) {
            //temp = zero[i];
            temp = pref[i] - zero[i];
            temp += ((n/2)-temp-zero[i])*2;

            ans = min(ans, temp);
        }

        cout << ans << "\n";
    }
    return 0;
}
