#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int n, k, i;
    double a, b, c, d, sum = 0, res, p;

    cin>>n>>k;

    //p = pow(10, -3);

    for(i = 0; i < n-1; i++)
    {
        if(i == 0)  cin>>a>>b>>c>>d;
        else cin>>c>>d;

        sum += sqrt(((a-c)*(a-c)) + ((b-d)*(b-d)));

        a = c;
        b = d;
    }

    res = (sum/50.0)*k;

    printf("%0.8f\n", res);

    return 0;
}