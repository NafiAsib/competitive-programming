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
#define pass printf("Passed Here\n")

typedef long long ll;
typedef unsigned int ui;

const int sz = 3e5+2;
int ara[sz];
int main()
{
    int n;
    ll moves = 0;
    cin>>n;
    for(int i = 0; i < n; i++) cin>>ara[i];
    sort(ara, ara+n);
    for(int i = 0; i < n; i++) {
        moves += abs(ara[i]-(i+1));
    }
    cout<<moves<<endl;
    return 0;
}