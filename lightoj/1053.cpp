#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int T, a, b, c, x, t, i, A, C;
    cin>>T;
    for(i = 1; i <= T; i++)
    {
        cin>>a>>b>>c;

        if(a > b)
        {
            t = b;
            b = a;
            a = t;
        }
        
        if(b > c)
        {
            t = c;
            c = b;
            b = t;
        }

        A = (a*a) + (b*b);
        C = c*c;

        if(A == C)
            cout<<"Case "<<i<<": "<<"yes"<<endl;

        else cout<<"Case "<<i<<": "<<"no"<<endl;
    }

    return 0;
}