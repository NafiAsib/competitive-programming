#include <bits/stdc++.h>

using namespace std;

int main()
{
    int top, top2, a, b, i, n, value = 0, c, d;

    cin>>n>>top;

    top2 = 7 - top;

    for(i = 0; i < n; i++)
    {
        cin>>a>>b;
        if(i == 0) continue;
        c = 7 - a;
        d = 7 - b;
        if(c == top || d == top || c == top2 || d == top2)
        {
            value = -1;
        }

        //top = 7 - top;
    }

    if(value == -1)
    {
        cout<<"NO"<<endl;
    }

    else cout<<"YES"<<endl;

    return 0;
}