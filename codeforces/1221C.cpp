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
    //fr; 
    int tc;
    cin>>tc;
    for(int i=0; i<tc; i++) {
        int x, y, z;
        cin>>x>>y>>z;
        int ans = 0;
        ans += min(x,min(y,z));
        x -= ans;
        y -= ans;
        //z -= ans;
        if(x == y) ans += (x+y)/2;
        else if(x>0 && y>0) ans += max(x,y)/min(x,y);
        cout<<ans<<endl;
    }
    return 0;
}


