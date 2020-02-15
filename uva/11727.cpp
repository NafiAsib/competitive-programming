#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, T, i, temp;
    cin>>T;

    for(i = 1; i <= T; i++)
    {
        cin>>a>>b>>c;
        if(a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        
        if(b > c)
        {
            temp = b;
            b = c;
            c = temp;
        }

        if(a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        
        cout<<"Case "<<i<<": "<<b<<endl;
    }

    return 0;
}