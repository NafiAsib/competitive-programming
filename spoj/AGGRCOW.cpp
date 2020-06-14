#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
typedef pair<int, int> pii;
typedef long long int64;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;
const long long linf = 0x3f3f3f3f3f3f3f3fLL;

int n, c;
const int maxn = 1e5+2;
int a[maxn];

bool isValid(int mid)
{
    int cnt = 1;
    int curr = a[0];
    for(int i=1; i<n; i++) {
        if(a[i]-curr >= mid) {
            cnt++;
            curr = a[i];
        }
        if(cnt == c) return true;
    }
    return cnt == c;
}

int bs() 
{
    int left = 0, right = 1e9, mid, ans;
    while(left <= right) {
        mid = left + (right-left)/2;
        if(isValid(mid)) {
            ans = mid;
            left = mid+1;
        }
        else right = mid-1;
    }

    return ans;
}

int main()
{
    #ifndef ONLINE_JUDGE
	    freopen("../io/in.txt", "r", stdin);
	    //freopen("../io/out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    int tc;
    cin >> tc;
    while(tc--) {
        cin >> n >> c;
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a, a+n);
        cout << bs() << endl;
    }
    return 0;
}

