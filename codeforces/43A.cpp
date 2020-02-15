#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main()
{
    string a, b, s;
    int i, j, n, t1 = 0, t2 = 0;
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cin>>s;

        if(n == 1)
        {
            cout<<s<<endl;
            break;
        }

        if(i == 0)
            a = s;

        if(a == s)
            t1++;
        else if(a != s)
        {
            b = s;
            t2++;
        }
    }

    if(t1>t2)
        cout<<a<<endl;
    else if(t2>t1)
        cout<<b<<endl;

    return 0;
}