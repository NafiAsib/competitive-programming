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
#define dbg(c) printf("in %d\n", c)
#define pass printf("Passed Here\n")

typedef long long ll;
typedef unsigned int ui;

int main()
{
    off;
    int n, m;
    cin>>n>>m;
    cout<<max(n,m)-1<<" "<<min(n,m)<<endl;
    return 0;
}