/*-------------- Bismillahir Rahmanir Rahmin --------------*/
//Geometry Problem on volume of a cone frustum
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
const double pi = 2*acos(0.0);

int main()
{
    //fr; fw;
    int tc, r1, r2, h, p, i, j;
    double r, x, v;
    sf("%d", &tc);
    int k = 0;
    while(tc--) {
        sf("%d %d %d %d", &r1, &r2, &h, &p);
        x = (double)(h*r2)/(r1-r2);
        r = r2+(double)(p*(r1-r2))/h;
        v = (pi*(((r*r)*(p+x))-(r2*r2)*x))/3;
        pf("Case %d: %.8lf\n", ++k, v);
    }

    return 0;
}