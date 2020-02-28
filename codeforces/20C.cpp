//CF 20C
#include <bits/stdc++.h>
using namespace std;

const int sz = 1e5;
int n, m;
vector< int > adj[sz+2], cost[sz+2];
int dist[sz+2];
int parent[sz+2];
int infinity = 1 << 30;

struct node {
    int u;
    int cost;
    node(int _u, int _cost) {
        u = _u;
        cost = _cost;
    }

    bool operator < (const node& p) const {
        return cost > p.cost;
    }
};

void dijkstra() {
    bool vis[n+2];
    memset(vis, 0, sizeof vis);
    priority_queue< node > q;
    q.push(node(1, 0));
    dist[1] = 0;
    while(!q.empty()) {
        node front = q.top();
        q.pop();
        int u = front.u;
        vis[u] = true;
        int range = adj[u].size();
        for(int i=0; i<range; i++) 
        {
            int v = adj[u][i];
            if(!vis[v] && dist[u]+cost[u][i] < dist[v]) {
                dist[v] = dist[u] + cost[u][i];
                q.push(node(v, dist[v]));
                parent[v] = u;
            }
        }
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("../io/in.txt", "r", stdin);
        freopen("../io/out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    cin>>n>>m;
    int x, y, w;
    for(int i=0; i<m; i++) {
        cin>>x>>y>>w;
        adj[x].push_back(y);
        adj[y].push_back(x);
        cost[x].push_back(w);
        cost[y].push_back(w);
    }
    for(int i=0; i<=n; i++) dist[i] = INT_MAX;
    dijkstra();

    if(dist[n] == INT_MAX) {
        cout<<"-1"<<endl;
    }
    else {
        vector< int > path;
        for(int i = n; i != 1; i = parent[i]) {
            path.push_back(i);
        }
        path.push_back(1);
        reverse(path.begin(), path.end());
        for(auto i:path) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
