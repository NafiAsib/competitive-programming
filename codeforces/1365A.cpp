#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr << #x << " = " << x << "\n"
typedef pair<int, int> pii;
typedef long long int64;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("../io/in.txt", "r", stdin);
    //freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int tc;
    cin >> tc;
    while(tc--) {
        int n, m;
        cin >> n >> m;
        int num = 0;
        int row[n+2] = {0};
        int col[m+2] = {0};
        int a[n+2][m+2];

        for(int i=0; i<n; i++) {
            for(int j =0; j<m; j++) {
                cin >> a[i][j];
                if(a[i][j] == 1) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(a[i][j] == 0) {
                    if(row[i] != 1 && col[j] != 1) {
                        num++;
                        row[i] = 1;
                        col[j] = 1;
                    }
                }
            }
        }
        if(num&1) cout << "Ashish\n";
        else cout << "Vivek\n";
    }

    return 0;
}
