#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long a, b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a > b)
            cout<<">"<<endl;
        else if(a < b)
            cout<<"<"<<endl;
        else if(a = b)
            cout<<"="<<endl;
    }

    return 0;
}