#include <bits/stdc++.h>
using namespace std;

const int maxnode = 2000+2;
const int maxedge = 1000000+2;

bool vis[maxnode];
vector< int > adj[maxnode];
int edge, node;
int color[maxnode];
int male = 1;
int female = 2;

bool bfs(int source) 
{
    vis[source] = true;
    queue< int > q;
    q.push(source);
    color[source] = male;

    while(!q.empty()) {
        int u = q.front();
        q.pop();

        for(int i=0; i<adj[u].size(); i++) 
        {
            int v = adj[u][i];
            if(color[u] == color[v]) return false;
            else if(!vis[v]) {
                q.push(v);
                vis[v] = 1;
                if(color[u] == male) color[v] = female;
                else color[v] = male;
            }
        }
    }
    return true;
}

int main()
{
    int tc;
    cin>>tc;
    for(int q=1; q<=tc; q++)
    {
        for(int i=1; i<maxnode; i++) adj[i].clear();
        for(int i=0; i<maxnode; i++) vis[i] = false;
        cin>>node>>edge;
        int u, v;
        for(int i=0; i<edge; i++) {
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        bool found = false;
        memset(color, 0, sizeof color);
        
        for(int i=1; i<=node; i++) {
            if(!vis[i]) {
                if(bfs(i) == false) {
                    printf("Scenario #%d:\nSuspicious bugs found!\n", q);
                    found = true;
                    break;
                }
            }
        }
        if(!found) printf("Scenario #%d:\nNo suspicious bugs found!\n", q);    
    }
    return 0;
}