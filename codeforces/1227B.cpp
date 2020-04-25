#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr << #x << " = " << x << "\n"
typedef pair<int, int> pii;
typedef long long ll;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("../io/in.txt", "r", stdin);
    //freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n+1]; 
        bool impossible = false;

        cin >> a[1];
        int mx = a[1];
        for(int i=2; i<=n; i++) {
            cin >> a[i];
            if(a[i] == 1 && i != 1) impossible = true;
            if(a[i] < mx) impossible = true;
            mx = max(mx, a[i]);
        }

        if(impossible) {
            cout << "-1" << "\n";
            continue;
        }

        vector< int > ans;
        bool used[n+2] = {false};
        int usedto = 1;
        ans.push_back(a[1]);

        mx = a[1];
        used[a[1]] = 1;
        for(int i=2; i<=n; i++) {
            if(a[i] < mx) {
                impossible = true;
                break;
            }
            else if(!used[a[i]]) {
                ans.push_back(a[i]);
                used[a[i]] = 1;
            }
            else {
                while(used[usedto] && usedto <= n) usedto++;
                if(usedto == n+1 || usedto > a[i]) {
                    impossible = true;
                    break;
                }
                ans.push_back(usedto);
                used[usedto] = 1;
            }
        }

        if(impossible) cout << "-1" << "\n";
        else {
            for(auto i:ans) cout << i << " ";
            cout << "\n";
        }
    }
    return 0;
}
