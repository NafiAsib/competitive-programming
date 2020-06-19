#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr << #x << " = " << x << "\n"
typedef pair<int, int> pii;
typedef long long int64;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("../io/in.txt", "r", stdin);
    //freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    long long k;
    cin >> k;
    vector< long long > a(10, 1LL);
    int i = 0;
    long long cnt = 1LL;
    while(cnt < k) {
        cnt /= a[i];
        a[i] += 1;
        cnt *= a[i];
        i++;
        if(i == 10) i = 0;
        //watch(cnt);
    }
    string s = "codeforces";
    for(i=0; i<10; i++) {
        for(int j = 1; j<=a[i]; j++) cout<<s[i];
    }
    cout << "\n";
    return 0;
}
