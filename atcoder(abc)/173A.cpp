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
    if(n < 1000) n = 1000 - n;
    else {
        while(n >= 1000) n -= 1000;
        if(n > 0) n = 1000 - n;
    }
    cout << n << "\n";
    return 0;
}
