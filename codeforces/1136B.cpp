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

int main()
{
    int n, k;
    cin>>n>>k;
    int ans = n*3;
    if(k!=1) {
        int dif1, dif2;
        dif1 = k-1;
        dif2 = n-k;
        int add = min(dif1, dif2);
        ans += add;
    }
    cout<<ans<<endl;
    return 0;
}