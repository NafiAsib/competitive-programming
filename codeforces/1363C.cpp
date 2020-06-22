#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr <<"\e[91m"<<__func__<<": "<< #x << " = " << x <<"\e[39m"<< "\n"
typedef pair<int, int> pii;
typedef long long int64;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;

int n, x;
const int maxn = 1000+5;
vector < int > deg (maxn);

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../io/in.txt", "r", stdin);
    //freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int tc;
    cin >> tc;
    while(tc--) {
        cin >> n >> x;
        for(int i=0; i<=n; i++) deg[i] = 0;
        int u, v;
        for(int i=0; i<n-1; i++) {
            cin >> u >> v;
            deg[u]++;
            deg[v]++;
        }
        if(deg[x] == 0) cout <<"Ayush\n";
        else if(deg[x] == 1) cout <<"Ayush\n";
        else if(n&1)  cout << "Ashish\n";
        else cout <<"Ayush\n";
    }
    return 0;
}
