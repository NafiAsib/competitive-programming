#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr <<"\e[91m"<<__func__<<": "<< #x << " = " << x <<"\e[39m"<< "\n"
typedef pair<int, int> pii;
typedef long long ll;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;

const int maxn = 1e5+2;
vector< int > adj[maxn];
int init[maxn];
int goal[maxn];
int moves = 0;
bool vis[maxn];
vector < int > ans;

void dfs(int current, int level, int even, int odd) {
    int present_val;
    vis[current] = 1;

    if(level%2 == 0) {
        present_val = (init[current]+even)%2;
        if(present_val != goal[current]) {
            even++;
            moves++;
            ans.push_back(current);
        }
    }
    else {
        present_val = (init[current]+odd)%2;
        if(present_val != goal[current]) {
            odd++;
            moves++;
            ans.push_back(current);
        }
    }

    for(auto i:adj[current])
        if(!vis[i]) dfs(i, level+1, even, odd);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../io/in.txt", "r", stdin);
    //freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int n;
    cin >> n;
    int u, v;
    for(int i=0; i<n-1; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1; i<=n; i++) cin >> init[i];
    for(int i=1; i<=n; i++) cin >> goal[i];
    
    for(int i=1; i<=n; i++) vis[i] = 0;
    dfs(1, 0, 0, 0);

    cout << moves << "\n";
    for(auto i:ans) cout << i << "\n";
    return 0;
}
