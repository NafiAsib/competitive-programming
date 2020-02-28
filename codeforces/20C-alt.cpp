#include <bits/stdc++.h>
using namespace std;
 
const int sz = 1e5;
vector< int > adj [sz+2], cost[sz+2];
int dist[sz+2];
int parent[sz+2];
int vertices, edges;
typedef pair<int, int > pii;

 
void dijkstra() {
    bool vis[vertices+2];
    memset(vis, 0, sizeof vis);
    for(int i=0; i<=vertices; i++) {
        dist[i] = INT_MAX;
    }
    priority_queue< pii, vector<pii>, greater<pii> > pq;
    pq.push(pii(0, 1));
 
    while(!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        if(u == vertices) break;
        vis[u] = true;
        int range = adj[u].size();
        for(int i=0; i<range; i++) {
            int v = adj[u][i];
            if(!vis[v] && dist[u]+cost[u][i] < dist[v]) {
                dist[v] = dist[u] + cost[u][i];
                pq.push(pii(dist[v], v));
                parent[v] = u;
            }
        }
    }
    if(dist[vertices] == INT_MAX) cout<<"-1"<<endl;
    else {
        vector< int > path;
        for(int i = vertices; i != 1; i = parent[i]) {
            path.push_back(i);
        }
        path.push_back(1);
        reverse(path.begin(), path.end());
        for(auto i:path) cout<<i<<" ";
        cout<<endl;
    }
}
 
int main() 
{
     #ifndef ONLINE_JUDGE
	    freopen("../io/in.txt", "r", stdin);
	    // freopen("../io/out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    cin>>vertices>>edges;
    int u, v, w;
    for(int i=0; i<edges; i++) {
        cin>>u>>v>>w;
        adj[u].push_back(v);
        adj[v].push_back(u);
        cost[u].push_back(w);
        cost[v].push_back(w);
    }
    dijkstra();
    return 0;
}