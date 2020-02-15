#include <bits/stdc++.h>


using namespace std;

const double pi = 2 * acos(0.0);

int main()
{
    double a, b, c, r, s, area_tri, area_in, area_ex, big;

    cin>>a>>b>>c;

    s = (a+b+c)/2;

    area_tri = sqrt(s*(s-a)*(s-b)*(s-c));

    r = (2*area_tri)/(2*s);

    area_in = pi*r*r;

    big = max(a,max(b,c));

    area_ex = pi*big*big;

    cout<<area_ex<<" "<<area_tri<<" "<<area_in<<"\n";

    return 0;
}