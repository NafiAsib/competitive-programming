#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr << #x << " = " << x << "\n"
typedef pair<int, int> pii;
typedef long long ll;
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
    string ans;
    string colors = "ROYG";
    int k = 0;
    for(int i=1; i<=n-3; i++) {
        ans.push_back(colors[k++]);
        k = k%4;
    }
    ans.push_back('B');
    ans.push_back('I');
    ans.push_back('V');

    cout << ans << "\n";
    return 0;
}
