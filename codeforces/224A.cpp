#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z, a, b, c;

    cin>>x>>y>>z;

    a = sqrt((x*z)/y);
    b = x/a;
    c = z/a;

    cout<<(4*a)+(4*b)+(4*c)<<endl;
}