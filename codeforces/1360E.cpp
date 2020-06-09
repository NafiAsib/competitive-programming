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
        char a[n+1][n+1];
        for(int i=0; i<n; i++) 
            for(int j=0; j<n; j++) cin >> a[i][j];

        bool flag = false;

        // for(int i=0; i<n; i++) {
        //     for(int j=0; j<n; j++) cout << a[i][j] << " ";
        //     cout<<"\n";
        // }
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(a[i][j] == '1') {
                    if(i == n-1 || j == n-1) continue;
                    else if(a[i][j+1] == '1' || a[i+1][j] == '1') continue;
                    else {
                        flag = true;
                        // watch(a[i][j+1]);
                        break;
                    }
                }
            }
        }

        if(flag) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}

