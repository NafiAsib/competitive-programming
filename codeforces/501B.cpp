#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr <<"\e[91m"<<__func__<<": "<< #x << " = " << x <<"\e[39m"<< "\n"
typedef pair<int, int> pii;
typedef long long ll;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;

const int maxn = 2000+2;
int p[maxn];

int find(int x) 
{
    if(p[x] == x) return x;
    return p[x] = find(p[x]);
}

void connect(int x, int y) 
{
    int u = find(p[x]);
    int v = find(p[y]);

    if(u != v) {
        p[v] = u;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../io/in.txt", "r", stdin);
    //freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int n;
    scanf("%d", &n);
    map<string, int> m;
    map<int, string > m2;
    string a, b;
    int k=1;
    while(n--) {
        cin >> a >> b;
        if(m.find(a) == m.end()) {
            m[a] = k++;
            p[m[a]] = m[a];
            m[b] = k++;
            p[m[b]] = m[a];
            m2[m[a]] = b;
        }
        else {
            m[b] = k++;
            p[m[b]] = p[m[a]];
            m2[p[m[a]]] = b;
        }
    }
    int cnt = 0;
    vector<pair<string, string > > ans;
    for(auto [i,j]:m) {
        if(p[j] == j) {
            cnt++;
            ans.push_back({i, m2[j]});
            // cout << i << " " << m2[j] << "\n";
        }
    }

    cout << cnt << "\n";
    for(auto i:ans) cout << i.first << " " << i.second << "\n";
    return 0;
}
