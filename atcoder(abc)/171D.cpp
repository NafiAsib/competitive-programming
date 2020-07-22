#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 1;
long long a[maxn];

int main()
{
    for(int i=0; i<maxn; i++) a[i] = 0LL;
    long long sum = 0LL;
    int n;
    cin >> n;
    long long x;
    for(int i=0; i<n; i++) {
        cin >> x;
        sum += x;
        a[x]++;
    }

    int q, b, c;
    long long total;
    cin >> q;
    
    while(q--) {
        cin >> b >> c;
        total = a[b];
        a[b] = 0;
        sum -= (long long)(b*total);
        a[c] += total;
        sum += (long long) (c*total);

        cout << sum << "\n";
    }

    return 0;
}