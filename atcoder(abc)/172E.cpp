#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr <<"\e[91m"<<__func__<<": "<< #x << " = " << x <<"\e[39m"<< "\n"
typedef pair<int, int> pii;
typedef long long ll;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;

const int mod = 1e7+7;
const int maxn = 5 * 1e5;
int n, m;
int ncr[maxn+2][maxn+2];
// int derange[maxn];

int fact(int n) 
{
    int a = 1;
    int ans = 1;

    for(int i=1; i<=n; i++) ans = ((ll)ans*i) % mod;

    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    // freopen("../io/in.txt", "r", stdin);
    //freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> m;
    int a = fact(n);    
    
    ncr[0][0] = 1;
    for(int i=1; i<=m; i++) 
        for(int j=0; j<=n; j++) {
            if(j > i) ncr[i][j] = 0;
            else if(j == i || j == 0) ncr[i][j] = 1;
            else ncr[i][j] = ((ncr[i-1][j-1] % mod ) + (ncr[i-1][j] % mod) ) % mod;
        }
    int derange[n+1];
    derange[0] = 1; derange[1] = 0;
    for(int i=2; i<=n; i++) derange[i] = (((i-1) % mod)*((derange[i-2]+derange[i-1]) % mod) ) % mod;

    int ans = ((((ncr[m][n] % mod) * (a % mod) ) % mod) * derange[n]) % mod;

    cout << ans << endl;
    return 0;
}
