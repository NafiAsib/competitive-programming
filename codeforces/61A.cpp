#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main()
{
    string a, b;
    int i, j;

    cin>>a>>b;

    for(i = 0; i < a.length(); i++)
    {
        if(a[i] == b[i])
            cout<<'0';
        
        else if(a[i] != b[i])
            cout<<'1';
    }

    cout<<endl;

    return 0;
}