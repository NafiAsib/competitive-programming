#include <iostream>
using namespace std;
typedef long long ll;
const long long sz = 2e5+3;
int ara[sz];
int main()
{
    ll n, i, eS = 0, oS = 0, eP = 0, oP = 0, ans = 0;
    cin>>n;
    for(int i = 1; i <= n; i++) {
        cin>>ara[i];
        if(i & 1) oP += ara[i];
        else eP += ara[i];
    }
    for(int i = 1; i <= n; i++) {
        if(i & 1) oP -= ara[i];
        else eP -= ara[i];
        if(oP+eS == eP+oS) ans++;
        if(i & 1) oS += ara[i];
        else eS += ara[i];
    }
    cout<<ans<<endl;
    return 0;
}