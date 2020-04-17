#include <bits/stdc++.h>
#define watch(x) cerr <<"at line "<< __LINE__ <<", " << #x << " = " << x << "\n"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ara[] = {500, 5, 1};
    int i  = 0;
    long long ans = 0LL;

    while(n != 0) {
        if(ara[i] <= n) {
            n -= ara[i];
            ans += (ara[i] == 500)? 1000:((ara[i]/5)*5);
            //watch(ara[i]);
        }
        else i++;
    }

    cout << ans << "\n";
    
    return 0;
}
