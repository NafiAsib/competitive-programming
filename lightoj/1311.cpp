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
    int i, j;
    double v1, v2, v3, a1, a2;
    int tc, k = 0;
    double d1, d2, t1, t2, t, s, d3;
    sf("%d", &tc);
    while(tc--) {
        sf("%lf %lf %lf %lf %lf", &v1, &v2, &v3, &a1, &a2);
        //cout 
        d1 = (double)(v1*v1)/(2*a1);
        d2 = (double)(v2*v2)/(2*a2);
        //cout<<d1<<" "<<d2<<endl;
        t1 = sqrt((2*d1)/a1);
        t2 = sqrt((2*d2)/a2);
        t = max(t1, t2);
        s = (double)d1+d2;
        d3 = (double)t*v3;
        printf("Case %d: %0.8lf %0.8lf\n", ++k, s, d3);
    }

    return 0;
}