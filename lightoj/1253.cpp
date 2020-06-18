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
    for(int q=1; q<=tc; q++) {
        int k;
        int x;
        cin >> k;
        int sum = 0, nim_sum = 0;
        for(int i=0; i<k; i++) {
            cin >> x;
            sum += x;
            nim_sum ^= x;
        }
        if(sum == k) {
            if(sum&1) cout << "Case "<< q << ": Bob\n"; 
            else cout << "Case "<< q << ": Alice\n"; 
        }
        else {
            if(nim_sum == 0) cout << "Case "<< q << ": Bob\n"; 
            else cout << "Case "<< q << ": Alice\n"; 
        }
    }
    return 0;
}

