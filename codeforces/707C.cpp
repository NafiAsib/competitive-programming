#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    long long a, b, c;
    cin>>a;
    if(a == 2 || a == 1)
    {
        cout<<"-1"<<endl;
        return 0;
    }

    if(a%2 != 0)
    {
        b = ((a*a)+1)/2;
        c = b - 1;
        cout<<b<<" "<<c<<endl;
        return 0;
    }

    else
    {
        b = (a*a)/4 + 1;
        c = b - 2;
        cout<<b<<" "<<c<<endl;
        return 0;
    }
}