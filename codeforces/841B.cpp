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
    int n;
    cin >> n;
    int a[n+2];
    long long sum = 0LL;
    bool odd = false;
    for(int i=0; i<n; i++) {
        cin >> a[i];
        sum += a[i];
        if(!odd && a[i]&1) odd = true;
    }
    if(sum&1LL) cout << "First\n";
    else if(!odd) cout << "Second\n";
    else cout << "First\n";
    return 0;
}
