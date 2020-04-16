#include <bits/stdc++.h>
#define watch(x) cerr <<"at line "<< __LINE__ <<", " << #x << " = " << x << "\n"
using namespace std;
typedef pair<int, int> PII;

const int mx = 1e5+2;

vector< int > adj[mx];
bool vis[mx];
int n, m;

vector< PII > bribes;

void dfs(int indx) {
    vis[indx] = true;

    for(int i=0; i<(int)adj[indx].size(); i++) {
        if(!vis[adj[indx][i]]) {
            dfs(adj[indx][i]);
        }
    }
}

int main()
{
    // freopen("../io/in.txt", "r", stdin);
    cin >> n >> m;

    int u, v;
    for(int i=1; i<=n; i++) {
        cin >> u;
        bribes.push_back({u,i});
    }

    for(int i=0; i<m; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=0; i<=n; i++) vis[i] = false;
    sort(bribes.begin(), bribes.end());

    long long cost = 0LL;

    for(auto i:bribes) {
        if(!vis[i.second]) {
            cost += i.first;
            dfs(i.second);
        }
    }
    cout << cost << "\n";

    return 0;
}
        