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
#define pass(x) cout<<"Passed step "<<(x)<<endl
#define RESET(a, b) memset(a, b, sizeof a)

typedef long long ll;
typedef unsigned int ui;
typedef pair<int, int> pii;
typedef vector< int > vi;
typedef vector < vi > vii;
int mod = 1000000007; //10^9+7
const double eps = 1e-9;
//const double pi = 2*acos(0.0);
//int fx[]={+1,-1,+0,+0};
//int fy[]={+0,+0,+1,-1};
//int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
//int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};

int main()
{
    //fr; 
    int n;
    cin>>n;
    ll ara[n+2];
    for(int i=0; i<n; i++) cin>>ara[i];
    sort(ara, ara+n, greater<int>());
    if(n == 2) {
        cout<<'1'<<" "<<ara[0]-ara[1]<<endl;
        return 0;
    }
    ll gc;
    ll mx = ara[0];
    gc = __gcd(mx-ara[1], mx-ara[2]);
    for(int i=3; i<n; i++) {
        gc = __gcd(gc, mx-ara[i]);
    }
    ll cnt = 0LL;
    for(int i=1; i<n; i++) {
        cnt += (mx-ara[i])/gc;
    }
    //watch(mx);
    cout<<cnt<<" "<<gc<<endl;
    return 0;
}