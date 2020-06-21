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
    int n, m, a;
    cin >> n >> m;
    int mid = n/2 + (n&1);
    if(n == 1) a = 1;
    else if(n-m < m) a = m-1;
    else a = m+1;
    cout << a << "\n";
    return 0;
}
