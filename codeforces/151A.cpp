#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np, i = 0, slices;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    slices = c * d;
    l = k * l;

    while(l > 0 && p > 0 && slices > 0)
    {
        l = l - (n*nl);
        p = p - (n*np);
        slices = slices - n;
        if(l >= 0 && p >= 0 && slices >= 0)
            i = i + 1;
    }

    cout<<i<<endl;
}