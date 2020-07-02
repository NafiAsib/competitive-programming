#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr <<"\e[91m"<<__func__<<": "<< #x << " = " << x <<"\e[39m"<< "\n"
typedef pair<int, int> pii;
typedef long long ll;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;

const int maxn = 5000+2;
int p[maxn];
int child[maxn];

int find(int x)
{
    if(p[x] == x) return x;
    else return p[x] = find(p[x]);
}

void connect(int x, int y) {
    int u = find(x); //pred
    int v = find(y);
    if(v != u) {
        p[v] = u;

        // child[u] += child[v];
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    // freopen("../io/in.txt", "r", stdin);
    // freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int c, r;
    while(1) {
        cin >> c >> r;
        if(c == 0) break;
        map<string, int > m;
        string s;
        
        for(int i=0; i<=c; i++) p[i] = i;
        for(int i=0; i<=c; i++) child[i] = 0;

        for(int i=1; i<=c; i++) {
            cin >> s;
            m[s] = i;
        }

        // for(auto [i, j]:m) {
        //     cout << i << " " << j << endl;
        // }

        string u, v;

        for(int i=0; i<r; i++) {
            cin >> u >> v;
            // watch(m[u]);
            // watch(m[v]);
            connect(m[v], m[u]);
        }
        for(int i=1; i<=c; i++) {
            p[i] = find(p[i]);
        }
        int ans = 0;
        for(int i=1; i<=c; i++) {
            child[p[i]]++;
        }
        // for(int i=1; i<=c; i++) watch(p[i]);
        // for(int i=1; i<=c; i++) {
        //     // watch(
        //     watch(child[i]);
        // }
        for(int i=1; i<=c; i++) ans = max(child[i], ans);

        cout << ans << "\n";

    }
    return 0;
}
