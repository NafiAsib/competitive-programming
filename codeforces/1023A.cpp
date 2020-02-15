#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    string s, t;
    int n, m, i, j, k, a = -1, b = 0;

    cin>>n>>m;
    cin>>s>>t;

    if(n == m)
    {
        for(i = 0; i < n; i++)
        {
            if(s[i] != t[i])
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }

        cout<<"YES"<<endl;
        return 0;
    }

    /*if(n > m+1)
    {
        cout<<"NO"<<endl;
        return 0;
    }*/

    if(n == 1 && m == 1)
    {
        if(s[0] != t[0])
        {
            cout<<"NO"<<endl;
            return 0;
        }

        else
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }

    for(i = 0; i < n; i++)
    {
        if(s[i] == '*')
        {
            a = 0;

            for(j = i - 1; j >= 0; j--)
            {
                if(s[j] != t[j])
                {
                    cout<<"NO"<<endl;
                    return 0;
                }

                else a++;
            }
        }

        cout<<a<<endl;

        if(i == a)
        {
            for(j = n-1; j > i; j--)
            {
                k = m - 1;
                if(s[j] != t[k])
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
                
                else 
                    b++;
                
                k--;
            }
        }

        if(a+b == n - 1)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }

    return 0;
}