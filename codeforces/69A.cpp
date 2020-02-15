#include <bits/stdc++.h>

using namespace std;

void poc(int n);

int main()
{
    int n, res;

    cin>>n;
    poc(n);

    return 0;
}

void poc(int n)
{
    int res = 0, i, xi = 0, yj = 0, zk = 0, x, y, z;
    while(n--)
    {
        cin>>x>>y>>z;
        xi += x;
        yj += y;
        zk += z;
    }

    if(xi == 0 && yj == 0 && zk == 0)
        cout<<"YES"<<endl;

    else
        cout<<"NO"<<endl;

    return;
}