#include <bits/stdc++.h>
using namespace std;

const int sz = 105;
int x[sz], y[sz], vis[sz];
int n;

void dfs(int indx) {
    vis[indx] = true;

    for(int i=0; i<n; i++) {
        if(!vis[i] && (x[indx] == x[i] || y[indx] == y[i])) {
            dfs(i);
        }
    }
}

int main()
{
    // freopen("../io/in.txt", "r", stdin);
    // int n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> x[i] >> y[i];

    memset(vis, false, sizeof false);

    int ans = -1;

    for(int i=0; i<n; i++) {
        if(!vis[i]) {
            ans++;
            dfs(i);
        }
    }

    cout << ans << "\n";


    return 0;
}