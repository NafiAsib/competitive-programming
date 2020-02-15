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

int n, x;
bool flag = false;
bool graph[10][10];
vector< int > v;
bool vis[10];

void bktk(int i) {
    v.push_back(i);
    vis[i] = 0;
    if((int)v.size() == x+1) {
        cout<<'(';
        int cnt = 0;
        for(int a = 0; a<x; a++) {
            cout<<v[a]+1<<',';
        }
        cout<<v[x]+1<<')';
        cout<<endl;
        flag = true;
        return;
    }
    for(int pos = 1; pos<n; pos++) {
        if(graph[i][pos] && vis[pos]) {
            graph[i][pos] = graph[pos][i] = 0;
            bktk(pos);
            v.pop_back();
            graph[i][pos] = graph[pos][i] = 1;
            vis[pos] = 1;
        }
    }
}

int main()
{
    //fr; fw;
    v.clear();
    cin>>n>>x;
    for(int i = 0; i<n; i++) {
        for(int j=0; j<n; j++) cin>>graph[i][j];
    }
    flag = false;
    if(n == x) { cout<<"no walk of length "<<x<<endl;}
    memset(vis, 1, sizeof vis);
    vis[0] = 0;
    bktk(0);
    if(!flag) cout<<"no walk of length "<<x<<endl;
    int huda;
    while(cin>>huda) {
        if(huda != -9999) break;
        v.clear();
        cin>>n>>x;
        for(int i = 0; i<n; i++) {
            for(int j=0; j<n; j++) cin>>graph[i][j];
        }
        flag = false;
        cout<<endl;
        if(n == x) { cout<<"no walk of length "<<x<<endl; continue;}
        memset(vis, 1, sizeof vis);
        vis[0] = 0;
        bktk(0);
        if(!flag) cout<<"no walk of length "<<x<<endl;
    }
    
    return 0;
}