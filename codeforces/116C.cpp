#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl

const int maxn = 2000+2;
vector< int > adj[maxn];
int depth[maxn];
bool vis[maxn];
int mx = 0;

void bfs(int source) {
    vis[source] = true;
    queue< int > q;
    q.push(source);
    depth[source] = 1;
    // mx = max(mx, 1);
    while(!q.empty()) {
        int u = q.front();
        q.pop();

        for(int i=0; i<adj[u].size(); i++) {
            int v = adj[u][i];
            // watch(v);
            if(!vis[v]) {
                depth[v] = depth[u]+1;
                mx = max(depth[v], mx);
                vis[v] = 1;
                q.push(v);
            }
        }
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("../io/in.txt", "r", stdin);
        // freopen("../io/out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    int n;
    cin>>n;
    int x;
    queue<int> q;
    for(int i=1; i<=n; i++) 
    {
        cin>>x;
        if(x == -1) {
            q.push(i);
            continue;
        }
        adj[x].push_back(i);
    }
    // for(int i=1; i<=n; i++) {
    //     if(adj[i].size() == 0) cout<<"i is "<<i<<endl;
    // }

    // for(int i=1; i<=n; i++) {
    //     for(auto x:adj[i]) cout<<x<<" ";
    //     cout<<endl;
    // }
    memset(vis, false, sizeof vis);
    memset(depth, 0, sizeof depth);
    while(!q.empty()) {
        int top = q.front();
        q.pop();
        bfs(top);
    }
    cout<<mx<<endl;

    return 0;
}