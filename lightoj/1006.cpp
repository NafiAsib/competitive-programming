#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define PI acos(-1)
#define sync_off() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define RESET(a,b)	memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)

//const int size = 1e6+5;
//const double PI acos(-1)

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    //sync_off();

    int caseno = 0, cases;
    ll fn[10005], n;

    cin >> cases;
    while(cases--) {
        cin >> fn[0] >> fn[1] >> fn[2] >> fn[3] >> fn[4] >> fn[5] >> n;
        for(int i = 6; i <= n; i++) {
            fn[i] = (fn[i-1] + fn[i-2] + fn[i-3] + fn[i-4] + fn[i-5] + fn[i-6])% 10000007;
        }
        cout << "Case " << ++caseno <<": "<< fn[n]%10000007 << endl;
    }

    return 0;
}

