#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr <<"at line "<< __LINE__ <<", " << #x << " = " << x << "\n"
typedef pair<int, int> pii;
typedef long long ll;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;

const int maxn = 2e5+2;
ll a[maxn];
ll tree[maxn];
int n;
ll freq[maxn];

void update(int idx, ll val) 
{
    while(idx <= n) {
        tree[idx] += val;
        idx += (idx & -idx);
    }
}

int query(int idx) {
    ll sum = 0LL;
    while(idx > 0) {
        sum += tree[idx];
        idx -= (idx & -idx);
    }
    return sum;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("../io/in.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    int q;
    cin >> n >> q;
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n, greater<ll>()); 

    int x, y;
    vector< pii > ij;

    for(int t=0; t<q; t++) {
        cin >> x >> y;
        ij.push_back({x, y});
        update(x, 1);
        update(y+1, -1);
    }
    ll ret = 0LL;
    for(int i=0; i<n; i++) freq[i] = query(i+1);
    sort(freq, freq+n, greater<ll>());
    for(int i=0; i<n; i++) ret += freq[i]*a[i];
    cout << ret << "\n";
    
    return 0;
}
