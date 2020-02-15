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

typedef long long ll;
typedef unsigned int ui;

int main()
{
    int x1, y1, x2, y2, a1, b1, a2, b2;
    cin>>x1>>y1>>x2>>y2;
    if(x1 == x2) {
        a1 = x2-1; b1 = y2;
        a2 = x2+1; b2 = y2;
        int ans = 4 + abs(a1-x1)+abs(b1-y1)+abs(a2-x1)+abs(b2-y1);
        cout<<ans<<endl;
    }
    else {
        a1 = x2; b1 = y2+1;
        a2 = x2; b2 = y2-1;
        int ans = 4 + abs(a1-x1)+abs(b1-y1)+abs(a2-x1)+abs(b2-y1);
        cout<<ans<<endl;
    }
    return 0;
}