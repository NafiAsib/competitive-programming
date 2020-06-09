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
        int n;
        cin >> n;
        int a[n+1];
        int odds = 0, evens = 0;
        bool flag = false;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            if(a[i]&1) odds++;
            else evens++;
        }

        if(evens%2 == odds%2) { 
            if(evens%2==0 && odds%2==0) {
                cout<<"YES\n";
                flag = true;
            }
            else {
                sort(a, a+n);
                for(int i=0; i<n-1; i++) 
                    if(a[i+1]-a[i] == 1) {
                        cout<<"YES\n";
                        flag = true;
                        break;
                    }
            }

            if(!flag) cout << "NO\n";
        }
        else {
            cout<<"NO\n";
        }
    }

    return 0;
}

