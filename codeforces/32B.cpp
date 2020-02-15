#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main()
{
    char s[201];
    int i, len;
    cin>>s;
    len = strlen(s);
    for(i = 0; i < len; i++)
    {
        if(s[i] == '-' && s[i+1] == '.')
        {
            cout<<"1";
            i += 1;
        }

        else if(s[i] == '-' && s[i+1] == '-')
        {
            cout<<"2";
            i += 1;
        }

        else if(s[i] == '.')
            cout<<"0";
    }

    return 0;
}