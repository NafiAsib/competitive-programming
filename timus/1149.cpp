#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr << #x << " = " << x << "\n"
typedef pair<int, int> pii;
typedef long long int64;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;

void an(int n) 
{
    for(int i=1; i<=n; i++) {
        cout << "sin(" << i;
        if(i == n) {
            for(int j=1; j<=n; j++) cout <<")";
        }
        else if(i&1) cout<<"-";
        else cout << "+";
    }
}

void sn(int n) 
{
    for(int i=1; i<=n-1; i++) cout<<"(";
    for(int i=1; i<=n; i++) {
        an(i);
        cout<<"+"<<n-i+1;
        if(i != n) cout<<")";
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    // freopen("../io/in.txt", "r", stdin);
    //freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int n;
    cin >> n;
    sn(n);
    cout << "\n";
    return 0;
}
