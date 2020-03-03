#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
#define pass(x) cout<<"Passed step "<<(x)<<endl
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

typedef long long LL;
typedef unsigned int UI;
typedef pair<int, int> PII;
typedef vector< int > VI;
typedef vector < VI > VII;
int mod = 1000000007; //10^9+7
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;
const long long linf = 0x3f3f3f3f3f3f3f3fLL;
//const double pi = 2*acos(0.0);
//int fx[]={+1,-1,+0,+0};
//int fy[]={+0,+0,+1,-1};
//int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
//int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
/* Templates */
template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
    os << "{";
    for(auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}\n";
}

template <typename T>
void see( T a[], int n ) {
    for(int i = 0; i < n; ++i) cout << a[i] << ' ';
    cout << endl;
}
int n, edge;
const int mx = 1e5+2;
vector<int> adj[mx], cost[mx];

void dijkstra() {
    bool vis[n+2];
    int dist[n+2];
    int dist2[n+2];
    for(int i=2; i<=n; i++) {
        dist[i] = inf;
        // dist[i][2] = inf;
        vis[i] = false;
        // vis[i][2] = true;
    }
    priority_queue< PII, vector< PII> , greater<PII> > pq;
    pq.push(PII(0, 1));
    dist[1] = 0;

    while(!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        if(vis[u]) continue;
        vis[u] = true;
        int sz = adj[u].size();
        for(int i=0; i<sz; i++) {
            int v = adj[u][i];
            if(dist[u] + cost[u][i] < dist[v])
            {
                dist2[v] = dist[v];
                dist[v] = dist[u] + cost[u][i];
                pq.push(PII(dist[v], v));
            }   
        }
    }
    cout<<dist2[n]<<endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("../io/in.txt", "r", stdin);
        // freopen("../io/out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    int tc;
    cin>>tc;
    for(int q=1; q<=tc; q++)
    {
        for(int i=0; i<n; i++) cost[i].clear();
        for(int i=0; i<edge; i++) adj[i].clear();
        cin>>n>>edge;
        for(int i=0; i<edge; i++)
        {
            int x, y, w;
            cin>>x>>y>>w;
            adj[x].push_back(y);
            adj[y].push_back(x);
            cost[x].push_back(w);
            cost[y].push_back(w);
        }
        dijkstra();
    }
    return 0;
}
