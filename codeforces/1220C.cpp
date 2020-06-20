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
    string s;
    cin >> s;
    int n = (int)s.size();
    char c = s[0];
    cout << "Mike\n";
    for(int i=1; i<n; i++) {
        if(s[i] > c) {
            // c = s[i];
            cout << "Ann\n";
        }
        else {
            if(s[i] < c) c = s[i];
            cout << "Mike\n";
        }
    }
    return 0;
}
