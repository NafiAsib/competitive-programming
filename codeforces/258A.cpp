#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr <<"at line "<< __LINE__ <<", " << #x << " = " << x << "\n"
typedef pair<int, int> pii;
typedef long long ll;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("../io/in.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    string s;
    cin >> s;
    bool zero = false;
    int i;
    for(i=0; i<(int)s.size()-1; i++) {
        if(!zero and s[i] == '0') {
            zero = true;
            continue;
        }
        else cout<<s[i];
    }
    if(zero) cout<<s[i];
    cout << "\n";
    return 0;
}
