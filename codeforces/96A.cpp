#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main()
{
    char s[101];
    int i, j, len, one = 0, zero = 0;
    cin>>s;
    len = strlen(s);
    for(i = 0; i < len; i++)
    {
        if(s[i] == '1')
        {
            one = 0;
            j = i;
            for(; j <= i + 7; j++)
            {
                if(s[j] == '0') break;
                else if(s[j] == '1')
                    one++;
            }
            
            if(one >= 7)
            {
                cout<<"YES"<<endl;
                break;
            }
        }

        else if(s[i] == '0')
        {
            zero = 0;
            j = i;
            for(; j <= i + 7; j++)
            {
                if(s[j] == '1') break;
                else if(s[j] == '0')
                    zero++;
            }
            if(zero >= 7)
            {
                cout<<"YES"<<endl;
                break;
            }
        }
    }

    if(one < 7 && zero < 7)
        cout<<"NO"<<endl;

    return 0;
}