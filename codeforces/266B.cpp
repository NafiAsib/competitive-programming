#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, t;
    char s[101];
    cin>>n>>t;
    cin>>s;
    while(t--)
    {
        for(i = 1; i < n; i++)
        {
            if(s[i] == 'G' && s[i-1] == 'B')
            {
                s[i] = 'B';
                s[i-1] = 'G';
                i += 1;
            }
        }
    }

    cout<<s<<endl;

    return 0;
}