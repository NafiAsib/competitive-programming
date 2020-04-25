#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 200000+2;
ll tree[maxn];
ll a[maxn];
ll b[maxn];
int n;

int b_search(int target) 
{
    int mid, left = 0, right = n;
    while(left <= right) {
        mid = left + (right-left)/2;
        if(b[mid] == target) return mid;
        else if(b[mid] > target) right = mid-1;
        else left = mid+1;
    }
    return mid;
}

void update(int idx, int val) 
{
    while(idx <= n) {
        tree[idx] += val;
        idx += (idx & -idx);
    }
}

ll query(int idx) 
{
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
        // freopen("../io/in.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        for(int i=1; i<=n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b+1, b+n+1);

        for(int i=0; i<=n; i++) tree[i] = 0;
        ll sum = 0LL;
        
        for(int i=1; i<=n; i++) {
            int pos = b_search(a[i]);
            sum += query(n) - query(pos);
            update(pos, 1);
        }

        cout << sum << "\n";
    }

    return 0;
}