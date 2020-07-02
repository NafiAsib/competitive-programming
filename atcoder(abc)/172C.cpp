#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr <<"\e[91m"<<__func__<<": "<< #x << " = " << x <<"\e[39m"<< "\n"
typedef long long ll;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("../io/in.txt", "r", stdin);
    //freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE

    ll n, m, k;
    cin >> n >> m >> k;
    vector< ll > a(n), b(m), asum(n+1), bsum(m+1);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];

    asum[0] = bsum[0] = 0;
    for(int i=0; i<n; i++) asum[i+1] = asum[i]+ a[i];
    for(int i=0; i<m; i++) bsum[i+1] = bsum[i] + b[i];

    int ans = 0, took;
    ll rest;

    int left, right, mid;

    for(int i=0; i<=n; i++) {
        rest = k - asum[i];
        // watch(rest);
        if(rest < 0) continue;
        // took = i;

        int inb = lower_bound(bsum.begin(), bsum.end(), rest) - bsum.begin();

        if(inb > m || bsum[inb] > rest) inb--;
        // watch(i+inb);
        ans = max(ans, i+inb);
    }

    printf("%d\n", ans); 
    
    return 0;
}
