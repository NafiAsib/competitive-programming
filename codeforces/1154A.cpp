#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define endl "\n"
#define off ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fr freopen("in.txt", "r", stdin)
#define fw freopen("out.txt", "w", stdout)
#define pb push_back
#define eb emplace_back
#define PII pair<int, int>
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
#define pass printf("Passed Here\n")

typedef long long ll;
typedef unsigned int ui;
int mod = 1000000007;

int main()
{
    int x, y, z, w;
    ll a[5];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    sort(a, a+4, greater<int>());
    ll c = abs(a[1]-a[2]+a[3])/2;
    ll b = abs(a[3]-c);
    ll d = abs(a[0]-(b+c));
    cout<<d<<" "<<b<<" "<<c<<endl;
    return 0;
}