#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr <<"\e[91m"<<__func__<<": "<< #x << " = " << x <<"\e[39m"<< "\n"
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
    int n;
    cin >> n;
    int ac = 0, tle = 0, wa = 0, re = 0;
    string s;
    while(n--) {
        cin >> s;
        if(s[0] == 'A') ac++;
        else if(s[0] == 'T') tle++;
        else if(s[0] == 'W') wa++;
        else if(s[0] == 'R') re++;
    }

    cout << "AC x " << ac << "\n";
    cout << "WA x " << wa << "\n";
    cout << "TLE x " << tle << "\n";
    cout << "RE x " << re << "\n";
    return 0;
}
