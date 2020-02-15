#include <bits/stdc++.h>
#include <cmath>
#define pi acos(-1)

using namespace std;

int main()
{
    int T, i;
    double r, area, circle, shaded;
    cin>>T;
    for(i = 1; i <= T; i++)
    {
        cin>>r;
        area = (2*r)*(2*r);
        circle = pi * (r*r);

        shaded = area - circle;

        cout<< std::fixed << std::setprecision(2) <<"Case "<<i<<": "<<shaded<<endl;
    }

    return 0;
}