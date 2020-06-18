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
    for(int q=1; q<=tc; q++) {
        int n;
        cin >> n;
        int nim_sum = 0, x, y;
        for(int i=0; i<n; i++) {
            cin >> x >> y;
            nim_sum ^= (y-x)-1;
        }
        if(nim_sum == 0) cout << "Case "<< q << ": Bob\n"; 
        else cout << "Case "<< q << ": Alice\n"; 
    }
    return 0;
}

