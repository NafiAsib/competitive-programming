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
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
#define iPass printf("Passed this step\n")

typedef long long ll;
typedef unsigned int ui;
typedef pair<int, int> pii;
int mod = 1000000007; //10^9+7
const double eps = 1e-9;
//const double pi = 2*acos(0.0);
//int fx[]={+1,-1,+0,+0};
//int fy[]={+0,+0,+1,-1};
//int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
//int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};

int main()
{
    //off;
    int fib[62];
    fib[0] = 0, fib[1] = 1;
    for(int i=2; i<60; i++) fib[i]=(fib[i-1]+fib[i-2])%10;
    ll tc;
    cin>>tc;
    while(tc--) {
        ll n;
        ll one = 1;
        cin>>n;
        n = one << (ll)log2((long double)n);
        cout<<fib[(n-1)%60]<<endl;
    }
    return 0;
}