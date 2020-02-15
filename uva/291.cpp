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

int graph[5][5] = {
    {0,1,1,0,1},
    {1,0,1,0,1},
    {1,1,0,1,1},
    {0,0,1,0,1},
    {1,1,1,1,0},
};

vector< int > ans;
int now;
//bool vis[6][6];

void bktrk(int now) {
    ans.push_back(now);
    if((int)ans.size() == 9) {
        for(auto x:ans) cout<<x+1;
        cout<<endl;
        return;
    }

    for(int i = 0; i<5; i++) {
        if(graph[now][i]) {
            graph[now][i] = graph[i][now] = 0;
            //ans.push_back(now);
            bktrk(i);
            ans.pop_back();
            graph[now][i] = graph[i][now] = 1;
        }
    }
}

int main()
{
    //memset(vis, false, sizeof vis);
    //fw;
    bktrk(0);
    return 0;
}