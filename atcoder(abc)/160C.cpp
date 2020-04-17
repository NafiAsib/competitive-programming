#include <bits/stdc++.h>
#define watch(x) cerr <<"at line "<< __LINE__ <<", " << #x << " = " << x << "\n"
using namespace std;

int main()
{
    int n, k;
    cin >> k >> n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    vector<int> segments;
    for(int i=0; i<n-1; i++) segments.push_back(a[i+1]-a[i]);
    segments.push_back(k-a[n-1]+a[0]);
    sort(segments.begin(), segments.end());
    int ans = 0;
    for(int i=0; i<(int)segments.size()-1; i++) ans += segments[i];

    cout << ans << endl;

    return 0;
}