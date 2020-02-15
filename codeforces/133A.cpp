#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int j = 0;
    cin>>s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')   // || s[i] == '+'
        {
            cout<<"YES"<<endl;
            j++;
            break;
        }
    }

    if(j == 0)
        cout<<"NO"<<endl;

    return 0;
}