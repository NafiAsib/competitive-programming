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
    int two, three, five, six;
    cin>>two>>three>>five>>six;
    ll ans = min(two, min(five,six));
    ll val = ans*256;
    //watch(ans);
    //three -= ans;
    two -= ans;
    ans = min(three, two);
    //watch(ans);
    if(ans > 0) val += ans*32;
    cout<<val<<endl; 
    return 0;
}
