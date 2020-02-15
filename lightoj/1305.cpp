/*-------------- Bismillahir Rahmanir Rahmin --------------*/
//
#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define endl "\n"
#define off() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fr freopen("in.txt", "r", stdin)
#define fw freopen("out.txt", "w", stdout)
#define pb push_back
#define eb emplace_back
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl

typedef long long ll;
typedef unsigned int ui;
//Variables
//const double pi = 2*acos(0.0);

int main()
{
    //fr; fw;
    int tc, ax, ay, bx, by, cx, cy, dx, dy, i, k = 0;
    ll area;
    sf("%d", &tc);
    while(tc--) {
        sf("%d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy);
        dx = cx - (bx-ax);
        dy = cy - (by-ay);
        area = abs((ax*by - ax*cy - ay*bx + ay*cx + bx*cy - cx*by));
        pf("Case %d: %d %d %lld\n", ++k, dx, dy, area);
    }

    return 0;
}