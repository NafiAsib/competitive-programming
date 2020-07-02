#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr <<"\e[91m"<<__func__<<": "<< #x << " = " << x <<"\e[39m"<< "\n"
typedef pair<int, int> pii;
typedef long long ll;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;

const int maxn = 1e5+2;
int p[maxn];
int network[2*maxn];

int find(int x) 
{
    if(x == p[x]) return x;
    return p[x] = find(p[x]);
}

int connect(int x, int y) 
{
    int u = find(x);
    int v = find(y);
    if(u != v) {
        p[v] = u;
        network[u] += network[v];
    }
    return network[u];
}

int main()
{
#ifndef ONLINE_JUDGE
    //freopen("../io/in.txt", "r", stdin);
    // freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        map<string, int > m;
        memset(p, 0, sizeof p);
        memset(network, 0, sizeof network);
        int k = 1;
        string a, b;
        for(int i=0; i<n; i++) {
            cin >> a >> b;
            if(m.find(a) == m.end()) m[a] = k++;
            if(m.find(b) == m.end()) m[b] = k++;
            if(p[m[a]] == 0) p[m[a]] = m[a];
            if(p[m[b]] == 0) p[m[b]] = m[b];
            if(network[m[a]] == 0) network[m[a]] = 1;
            if(network[m[b]] == 0) network[m[b]] = 1;
            cout << connect(m[a], m[b]) << "\n";
        }
    }
    return 0;
}
