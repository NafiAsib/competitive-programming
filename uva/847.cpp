#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
typedef pair<int, int> pii;
typedef long long int64;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;
const long long linf = 0x3f3f3f3f3f3f3f3fLL;

int64 n;
bool solve(int p) 
{
    if(p*9<n && p*18>=n) return 0;
    for(int i=2; i<=9; i++) {
        if(solve(p*i) == 0) return 1;
    }
    return 0;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../io/in.txt", "r", stdin);
    freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    while(cin>>n) {
        if(n<=9) cout << "Stan wins.\n";
        else if(solve(1) == 0) cout << "Ollie wins.\n";
        else cout << "Stan wins.\n";
    }

    return 0;
}

