#include <bits/stdc++.h>
using namespace std;
const int mx = 2e5+2;
int a[mx];
int cnt[mx];

int main()
{
    // freopen("../io/in.txt", "r", stdin);
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        cnt[a[i]]++;
    }

    unordered_map<int, long long> mp;
    int x;
    long long total = 0LL;

    for(int i=1; i<=n; i++) {
        x = cnt[i];
        if(x != 0) {
            mp[i] = 1LL*x*(x-1)/2;
            total += mp[i];
        }
    }

    for(int i=0; i<n; i++) {
        x = a[i];
        cout<<total - mp[x] + 1LL*(cnt[x]-1)*(cnt[x]-2)/2 << "\n";
    }

    return 0;
}

    