#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long d1, d2, d3;
    cin>>d1>>d2>>d3;
    if(d1 + d2 == d3)
        cout<<2*(d1+d2)<<endl;

    else if(d2 + d3 == d1)
        cout<<(2*d2)+(2*d3)<<endl;

    else if(d1 + d2 < d3)
        cout<<(2*d1)+(2*d2)<<endl;
    
    else if(d2 + d3 < d1)
        cout<<(2*d2)+(2*d3)<<endl;
    
    else if(d1 + d3 < d2)
        cout<<(2*d1)+(2*d3)<<endl;
    
    else if(d1 == d2 && d2 == d3)
        cout<<d1+d2+d3<<endl;

    else if(d1 + d2 > d3)
        cout<<d1+d2+d3<<endl;

    return 0;
}