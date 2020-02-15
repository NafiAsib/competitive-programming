#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main()
{
    char str[1002], str2[1002], a;
    int i, j = 0, len, ara[123], n, x, k;
    bool flag = true;

    memset(ara, 0, sizeof(ara));

    //for(i = 65; i < 123; i++) cout<<ara[i];

    //cout<<endl;

    cin>>n>>str;

    len = strlen(str);

    for(i = 0; i < len; i++)
    {
        a = str[i];
        ara[a]++;

    }

    /*for(i = 65; i < 123; i++)
    {
        cout<<ara[i];
        //if(ara[i] != 0) cout<<i;
    }

    cout<<endl;

    str[n] = '\0';*/

    for(i = 65; i < 123; i++)
    {
        if(ara[i] != 0)
        {
            if(ara[i] % n != 0)
            {
                cout<<"-1"<<endl;
                flag = false;
                break;
            }

            else
            {
                x = ara[i] / n;
                for(k = 0; k < x; k++)
                {
                    str2[j] = i;
                    j++;
                }
            }
        }
    }

    str2[j] = '\0';

    if(flag == true)
    {
        for(i = 0; i < n; i++)
        {
            cout<<str2;
        }

        cout<<endl;
    }

    return 0;
}