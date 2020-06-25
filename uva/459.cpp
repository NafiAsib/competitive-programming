#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr <<"\e[91m"<<__func__<<": "<< #x << " = " << x <<"\e[39m"<< "\n"
typedef pair<int, int> pii;
typedef long long ll;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;

int p[30];

int find(int x)
{
    if(p[x] == x) return x;
    else return p[x] = find(p[x]);
}

void connect(int x, int y) 
{
    p[find(y)] = find(x);
}

int main()
{
#ifndef ONLINE_JUDGE
    // freopen("../io/in.txt", "r", stdin);
    // freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int tc;
    cin >> tc;
    for(int q=1; q<=tc; q++) {
        char u, v;
        int x, y;
        cin >> u;
        // watch(u);
        int sz = u - 64;
        for(int i=1; i<=sz; i++) p[i] = i;
        string s;
        getline(cin, s);
        while(1) {
            
            if(!getline(cin, s) || s.empty()) break;
            x = s[0]-64;
            y = s[1]-64;
            if(p[x] != p[y])
                connect(x, y);
            // watch(s);
        }
        int cnt = 0;
        for(int i=1; i<=sz; i++) 
            if(p[i] == i) 
                cnt++;
        if(q != 1) cout <<"\n";
        cout << cnt << "\n";
    }
    return 0;
}
