#include <bits/stdc++.h>
#define watch(x) cerr <<"at line "<< __LINE__ <<", " << #x << " = " << x << "\n"
using namespace std;

const int mx = 2e5+2;
vector< int > adj[mx];
int level[mx] = {0};
int subtree[mx] = {0};
int n, k, taken = 0;
long long ans = 0LL;

int dfs(int node, int parent) {
    level[node] = level[parent]+1;;
    subtree[node] = 1;
    for(auto i:adj[node]) 
        if(i != parent) 
            subtree[node] += dfs(i, node);
    
    return subtree[node];
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("../io/in.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    cin >> n >> k;
    int u, v;
    for(int i=0; i<n-1; i++) {
        cin >> u >> v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    dfs(1, 0);
    vector<int> diff;


    for(int i=1; i<=n; i++) diff.push_back(subtree[i]-level[i]);
    sort(diff.begin(), diff.end());
    taken = n-k;
    for(int i=(int)diff.size()-1; taken>0; i--) {
        ans += diff[i];
        taken--;
    }
    cout << ans << "\n";
    return 0;
}