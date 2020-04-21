#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr <<"at line "<< __LINE__ <<", " << #x << " = " << x << "\n"
typedef pair<int, int> pii;
typedef long long ll;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;


int power(int k) {
    int sum = 1;
    for(int i=1; i<=k; i++) sum *=2;
    return sum;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("../io/in.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        int div = 3;
        while(n%div != 0) div = (div*2)+1;
        cout << n/div <<"\n";
    };
    return 0;
}
