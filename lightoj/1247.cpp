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
    //freopen("../io/in.txt", "r", stdin);
    //freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int tc;
    cin >> tc;
    for(int t=1; t<=tc; t++) {
        int n, m;
        cin >> n >> m;
        int x;
        int row, nim_sum = 0;
        for(int i=0; i<n; i++) {
            row = 0;
            for(int j=0; j<m; j++) {
                cin >> x;
                row += x;
            }
            nim_sum ^= row;
        }

        if(nim_sum == 0) cout << "Case "<< t << ": Bob\n"; 
        else cout << "Case "<< t << ": Alice\n"; 
    }
    return 0;
}

