#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
using namespace std;

int main()
{
    int t;
    ll a, b, k, i, ans = 0;

    cin >> t;

    while(t--) {
        cin >> a >> b >> k;
        ans = 0;
        if(a == b) {
            if(k%2 == 0)ans = 0;
            else ans = a;
        }

        if((a != b) && (k&1)) {
            ans = (a - b)*((k-1)/2);
            ans += a;
        }
        else if((a != b) && (k%2 == 0)) {
            ans = (a-b)*(k/2);
        }
        cout << ans << endl;
    }

    return 0;
}
