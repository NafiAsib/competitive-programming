#include <bits/stdc++.h>
#define pf printf
#define sf scanf
using namespace std;
map<int, int> dist;

void bfs(int node, map< int, vector< int > > graph) {
    queue< int > Q;
    Q.push(node);
    dist[node] = 0;
    while(!Q.empty()) {
        int top = Q.front();
        Q.pop();
        for(int i = 0; i < graph[top].size(); i++) {
            int u = graph[top][i];
            if(!dist.count(u)) {
                dist[u] = dist[top] + 1;
                Q.push(u);
            }
        }
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int node, edge, i, j, test = 0, x, y;
    while(1) {
        sf("%d", &edge);
        if(edge == 0) break;
        map< int, vector< int > > graph;
        for(i = 0; i < edge; i++) {
            sf("%d %d", &x, &y);
            graph[x].push_back(y);
            graph[y].push_back(x);
        }
        while(1) {
            int source, TTL;
            sf("%d %d", &source, &TTL);
            if(source == 0 && TTL == 0) break;
            dist.clear();
            bfs(source, graph);
            int cnt = 0;
            for(auto &it : dist) {
                if(it.second > TTL) cnt += 1;
            }
            cnt += graph.size() - dist.size();
            pf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", ++test, cnt, source, TTL);
        }
    }
}