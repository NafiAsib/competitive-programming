#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr <<"\e[91m"<<__func__<<": "<< #x << " = " << x <<"\e[39m"<< "\n"
typedef pair<int, int> pii;
typedef long long ll;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;

const int maxn = 1e4+2;

vector< int > adj[maxn];
bool vis[maxn];
int moves = 0;
int n;
int target[maxn];

void dfs(int node, int ancestor) 
{
    vis[node] = 1;
    if(ancestor != target[node]) {
        ancestor = target[node];
        moves++;
    }

    for(auto i:adj[node]) 
        if(!vis[i])
            dfs(i, ancestor);

}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../io/in.txt", "r", stdin);
    //freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    int u, v;
    for(int i=2; i<=n; i++) {
        cin >> u;
        adj[u].push_back(i);
        adj[i].push_back(u);
    }
    for(int i=1; i<=n; i++) cin >> target[i];
    dfs(1, 0);

    cout << moves << "\n";
    return 0;
}
