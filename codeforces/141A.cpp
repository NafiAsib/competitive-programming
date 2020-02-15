#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string s, s1, s2;
    int i, j, n, a = 0, b = 0, c = 0;

    cin>>s1>>s2>>s;

    if(s1.size() + s2.size() != s.size())
    {
        cout<<"NO"<<endl;
        return 0;
    }

    for(i = 0; i <= s1.size(); i++)
    {
        for(j = 0; j <= s.size(); j++)
        {
            if(s1[i] == s[j])
            {
                s[j] = 0;
                break;
            }
        }
    }

    for(i = 0; i <= s2.size(); i++)
    {
        for(j = 0; j <= s.size(); j++)
        {
            if(s2[i] == s[j])
            {
                s[j] = 0;
                break;
            }
        }
    }
    
    for(i = 0; i <= s.size(); i++)
    {
        if(s[i] != 0)
        {
            cout<<"NO"<<endl;
            c = 1;
            break;
        }
    }

    if(c == 0)
        cout<<"YES"<<endl;

    return 0;
}