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
#define pass printf("Passed Here\n")

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
    int n, m;
    int ans = 0;
    cin >> n >> m;
    vector< string > v;
    string s;
    int mark[m+2];
    for(int i = 0; i < n; i++) {
        cin>>s;
        v.pb(s);
    }
    for(int i = 0; i < m; i++) cin>>mark[i];
    for(int i = 0; i < m; i++) {
        int cA = 0;
        int cB = 0;
        int cC = 0;
        int cD = 0;
        int cE = 0;
        //pass;
        for(int j = 0; j < n; j++) {
            if(v[j][i] == 'A') cA++;
            else if(v[j][i] == 'B') cB++;
            else if(v[j][i] == 'C') cC++;
            else if(v[j][i] == 'D') cD++;
            else if(v[j][i] == 'E') cE++;
            //pass;
        }
        int maxCnt = max(cA, max(cB, max(cC, max(cD, cE))));
        ans += (maxCnt*mark[i]);
    }
    cout<<ans<<endl;
    return 0;
}