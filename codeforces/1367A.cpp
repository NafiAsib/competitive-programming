#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
typedef pair<int, int> pii;
typedef long long int64;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;
const long long linf = 0x3f3f3f3f3f3f3f3fLL;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../io/in.txt", "r", stdin);
    //freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int tc;
    cin >> tc;
    while(tc--) {
        string s;
        cin >> s;
        if((int)s.size() == 2) {
            cout<<s<<endl;
            continue;
        }
        int sz = (int)s.size();
        for(int i=0; i<sz-1; i+=2) cout<<s[i];
        cout<<s[sz-1]<<endl;
    }
    return 0;
}

