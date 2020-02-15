#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main()
{
    char str[202], str2[202];
    int n, i, j = 0, len;

    cin>>str;

    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        if(str[i] == 'W')
        {
            if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B')
            {
                str[i] = 0;
                str[i+1] = 0;
                if(i != 0) str[i+2] = ' ';
                else str[i+2] = 0;
            }
        }
    }

    for(i = 0; i < len; i++)
    {
        if(str[i] == ' ')
        {
            if(str2[j-1] != ' ')
            {
                str2[j] = str[i];
                j++;
            }
        }
        else if(str[i] != 0)
        {
            str2[j] = str[i];
            j++;
        }
    }

    str2[j] = '\0';

    cout<<str2<<endl;

    return 0;
}