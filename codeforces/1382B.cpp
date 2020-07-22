#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e5;
int a[maxn];

int main()
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];

        int k = 0;

        while(k<n && a[k] == 1) k++;

        cout << ((k == n) ^ (k % 2) ? "Second" : "First") << "\n";
    }

    return 0;
}