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
    //fr;
    int ox, oy, ax, ay, bx, by, j, i, tc;
    sf("%d", &tc);
    int k = 0;
    while(tc--) {
        sf("%d %d %d %d %d %d", &ox, &oy, &ax, &ay, &bx, &by);
        //double oa = sqrt((ax-ox)*(ax-ox) + (ay-oy)*(ay-oy));
        double ob = sqrt(((ox-bx)*(ox-bx)) + ((oy-by)*(oy-by)));
        double ab = sqrt(((ax-bx)*(ax-bx)) + ((ay-by)*(ay-by)));
        double theta = acos(((ob*ob)+(ob*ob)-(ab*ab))/(2*ob*ob));
        double len = (double)ob*theta;
        pf("Case %d: %0.8lf\n", ++k, len);
    }

    return 0;
}