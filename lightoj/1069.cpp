#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int pos, T, lift, i, sec;
    cin>>T;
    for(i = 1; i <= T; i++)
    {
        cin>>pos>>lift;
        sec = abs(pos - lift)*4 + (pos*4) + 9 + 10;

        cout<<"Case "<<i<<": "<<sec<<endl;
    }

    return 0;
}