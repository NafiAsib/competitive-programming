#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z, a, year;

    cin>>year;

    while(1)
    {
        year = year + 1;
        x = year / 1000;
        y = year % 10;
        z = (year / 100) % 10;
        a = (year / 10) % 10;

        //cout<<x<<y<<z<<a<<endl;

        if(x != y && y != z && z != a && x != z && x != a && y != a)
            break;
    }

    cout<<year<<endl;

    return 0;
}