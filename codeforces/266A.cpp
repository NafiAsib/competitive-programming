#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main()
{
    int n, i, count = 0;
    char s[51];
    cin>>n;
    cin>>s;

    for(i = 0; i < n; i++)
    {
        if(s[i] == s[i+1])
        {
            count++;
            s[i] = 0;
        }
    }

    cout<<count<<endl;

    return 0;
}