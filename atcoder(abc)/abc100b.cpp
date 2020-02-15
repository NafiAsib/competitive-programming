#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define endl "\n"
#define off ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fr freopen("in.txt", "r", stdin)
#define fw freopen("out.txt", "w", stdout)
#define pb push_back
#define eb emplace_back
#define PII pair<int, int>
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
#define pass printf("Passed Here\n")

typedef long long ll;
typedef unsigned int ui;
int mod = 1000000007;

int main()
{
    ll d, n, ans;
    cin>>d>>n;
    if(d == 0) {
        cout<<n+(n/100)<<endl;
    }   
    else if(d == 1) {
        ans = 100*(n+(n/100));
        cout<<ans<<endl;
    }
    else {
        ans = 100*100*(n+(n/100));
        cout<<ans<<endl;
    }
    return 0;
}