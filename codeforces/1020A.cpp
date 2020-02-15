#include <bits/stdc++.h>
//#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
    int n, h, a, b, k, fa, fb, ta, tb, i, tim = 0, pos;

    cin>>n>>h>>a>>b>>k;

    for(i = 0; i < k; i++)
    {
        cin>>ta>>fa>>tb>>fb;

        if(ta == tb && fa != fb)
        {
            cout<<abs(fa - fb)<<endl;
            continue;
        }

        else if(ta == tb && fa == fb)
        {
            cout<<"0"<<endl;
            continue;
        }
        
        else if(ta != tb)
            tim = abs(ta-tb);

        pos = 0;
        
        if(fa > b)
        {
            tim = tim + (fa - b);
            pos = b;
        }
        else if(fa < a)
        {
            tim = tim + (a - fa);
            pos = a;
        }

        else if(fa == a)
            pos = a;

        else if(fa == b)
            pos = b;

        else if(fa >= a && fa <= b)
            pos = fa;
        
        if(pos != fb)
            tim = tim + abs(pos - fb);

        cout<<tim<<endl;
    }

    return 0;
}