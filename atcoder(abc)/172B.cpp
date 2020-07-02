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
    string a, b;
    cin >> a >> b;
    int dif = 0;
    for(int i=0; i<a.size(); i++) if(a[i] != b[i]) dif++;
    cout << dif << endl;
    return 0;
}
