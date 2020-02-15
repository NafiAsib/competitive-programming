#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, cap = 0, pas = 0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        pas = pas + b - a;
        if(pas > cap)
            cap = pas;
    }

    cout<<cap<<endl;

    return 0;
}