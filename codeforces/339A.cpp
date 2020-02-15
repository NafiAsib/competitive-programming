#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main()
{
    char s[101];
    int i, j = 0, len, temp = 0, n;
    int a[100];
    cin>>s;
    len = strlen(s);

    for(i = 0; i < len; i++)
    {
        if(s[i] != '+')
        {
            a[j] = s[i] - 48;
            j++;
        }
    }

    n = j;

    for(i = 0; i < n-1; i++)
    {
        for(j = n-1; j > i; j--)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        cout<<a[i];
        if(i >= n -1)
            break;
        else
            cout<<"+";
    }

    cout<<endl;

    return 0;
}