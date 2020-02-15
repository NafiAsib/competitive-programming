#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define endl "\n"
#define dbg(c) printf("in %d\n", c);
#define off() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fr freopen("in.txt", "r", stdin)
#define fw freopen("out.txt", "w", stdout)
#define pb push_back
#define eb emplace_back
#define PII pair<int, int>
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
#define N 1000000

int a[N];
int mark[N];
typedef long long ll;
typedef unsigned int ui;

int main()
{
    int n, m, val;
    map<int, int> mp;
    vector<int>v;
    cin>>n>>m;
    for(int i = 0; i < n+m; i++) {
        cin>>a[i];
    }
    for(int i = 0; i < n+m; i++) {
        cin>>val;
        if(val == 0) mark[i] = 0;
        else mark[i] = 1, v.pb(val);
    }
    if(v.size() == 1) {cout<<n<<endl; return 0;}
    int k = 0;
    for(int i = 0; i < n+m; i++) {
        if(mark[i] == 0) {
            while(!(a[i]>v[k]) k++;
            if(k == )
        }
    }   
    return 0;
}