#include <bits/stdc++.h>


using namespace std;

const double pi = 2 * acos(0.0);

int main()
{
    double a, b, c, r, s, area_tri, area_in, area_ex, big;

    while(scanf("%lf %lf %lf", &a, &b, &c)==3)
    {
        s = (a+b+c)/2;

        area_tri = sqrt(s*(s-a)*(s-b)*(s-c));

        r = (2*area_tri)/(2*s);

        area_in = pi*r*r;

        big = (a*b*c)/sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c));

        area_ex = pi*big*big;

        cout<<fixed<<setprecision(4)<<area_ex-area_tri<<" "<<area_tri-area_in<<" "<<area_in<<"\n";
    }

    return 0;
}