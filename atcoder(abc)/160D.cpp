#include <bits/stdc++.h>
using namespace std;
const int inf = 0x3f3f3f3f;
const int mx = 2e3+2;
int edge[mx][mx];
int cost[mx][mx];

int main()
{
    int n;
    cin >> n;
    int x, y;
    cin >> x >> y;
    int cnt[n] = {0};

    for(int i=1; i<=n; i++) {
        for(int j=i+1; j<=n; j++) {
            int dist;
            dist = min(j-i, abs(x-i)+1+abs(y-j));
            if(dist > 0) cnt[dist]++;
        }
    }

    for(int i=1; i<n; i++) {
        cout<<cnt[i]<<"\n";
    }

    return 0;
}


