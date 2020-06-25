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
    // freopen("../io/in.txt", "r", stdin);
    //freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    unsigned long long a, b, n;
    cin >> a >> b >> n;
    bool flag = false;
    while(1) {
        for(long long i=0LL; i<=9LL; i++) 
            if(((a*10LL)+i)%b == 0) {
                a = (a*10LL)+i;
                flag = true;
                break;
            }

        if(flag) n--;
        else break;
        if(n == 0) break;
    }
    if(n == 0) cout << a << "\n";
    else cout << "-1\n";
    return 0;
}
