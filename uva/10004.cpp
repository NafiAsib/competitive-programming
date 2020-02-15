#include <bits/stdc++.h>
using namespace std;
#define pb push_back
vector< int > adj[201];
int visited[201];
int color[201];
int red = 1;
int green = 2;

bool bfs(int n, int s) {
    int v;
    for(int i = 0; i < n; i++) visited[i] = 0;
    for(int i = 0; i < n; i++) color[i] = 0;
    queue< int > Q;
    Q.push(s);
    color[s] = red;
    
    while(!Q.empty()) {
        int u = Q.front();
        Q.pop();
        for(int i = 0; i < adj[u].size(); i++) {
            if(visited[adj[u][i]] == 0) {
                v = adj[u][i];
                visited[v] = 1;
                if(color[u] == red) {
                    color[v] = green;
                }
                else if(color[u] == green) {
                    color[v] = red;
                }
                Q.push(v);
            }
            else if(visited[adj[u][i]] != 0) {
                v = adj[u][i];
                if(color[v] == color[u]) {
                    return false;
                }
            }
        }
    }
    return true;
}

int main()
{
    /* freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout); */
    
    int n, i, j, node, source, edge, T, n1, n2;
    //cin >> T;
    while(1) {
        cin>>node;
        if(node == 0) break;
        cin>>edge;
        for(j = 1; j <= edge; j++) {
            cin >> n1 >> n2;
            if(j == 1) source = n1;
            adj[n1].pb(n2);
        }
        bool result = bfs(node, source);
        if(result == true) cout << "BICOLORABLE."<<endl;
        else cout << "NOT BICOLORABLE." << endl;

        for(i = 0; i < 201; i++) adj[i].clear();
    }

    return 0;
}