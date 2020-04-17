#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("../io/in.txt", "r", stdin);
    int tc;
    cin >> tc;
    for(int q=1; q<=tc; q++) {
        int n;
        cin >> n;
        int cost[n+1][n+1];
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) cin>>cost[i][j];
        }

        for(int k=1; k<=n; k++) 
            for(int i=1; i<=n; i++) 
                for(int j=1; j<=n; j++) 
                    if(cost[i][j] > cost[i][k]+cost[k][j])
                        cost[i][j] = cost[i][k]+cost[k][j];

        int r;
        cin >> r;

        int ans = 0;
        int u, v;
        while(r--) {
            cin >> u >> v;
            ans += cost[u][v];
        }
        cout << "Case #" << q << ": " << ans << "\n";
    }

    return 0;
}