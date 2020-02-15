
//Not solved

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,s1, s2;
    vector< int > t1, t2;
    //vector< int > t1;
    int a = 0, b = 0, m, n, score, i;
    
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cin>>s;
        cin>>score;
        if(i == 0) s1 = s;
        
        if(s == s1) 
        {
            a += score;
            t1.push_back(score);
            t2.push_back(0);
        }
        else if(s != s1)
        {
            s2 = s;
            b += score;
            t2.push_back(score);
            t1.push_back(0);
        }
    }

    if(a>b)
        cout<<s1<<endl;

    else if(b>a)
        cout<<s2<<endl;
    
    else if(a == b)
    {
        m = a;
        a = 0;
        b = 0;
        for(i = 0; i < n; i++)
        {
            a += t1[i];
            b += t2[i];

            if(a == m)
            {
                cout<<s1<<endl;
                break;
            }

            else if(b == m)
            {
                cout<<s2<<endl;
                break;
            }
        }
    }

    return 0;
}