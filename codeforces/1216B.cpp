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
typedef vector< pii > vpii;
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
    vpii v;
    cin>>n;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        v.push_back(pii(x, i+1));
    }
    sort(v.rbegin(), v.rend())  ;
    int ans = 0, i = 0;
    for(auto x:v) {
        ans += x.first*i + 1;
        i++;
    }
    cout<<ans<<endl;
    for(auto x:v) cout<<x.second<<" ";
    cout<<endl;
    return 0;
}
