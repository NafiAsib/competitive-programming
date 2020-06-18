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
        int a[n+2];
        cin >> n;
        int x, nim_sum = 0;
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        for(int i=0; i<n; i++) {
            cin >> x;
            nim_sum ^= x-a[i]-1;
        }
        if(nim_sum == 0) cout << "Case "<< q << ": black wins\n"; 
        else cout << "Case "<< q << ": white wins\n"; 
    }
    return 0;
}

