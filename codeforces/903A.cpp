#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin>>n;
    while(n--)
    {
        cin>>i;
        if(i == 1 || i == 2 || i == 4 || i == 5 || i == 8 || i == 11)
            cout<<"NO"<<endl;

        else
            cout<<"YES"<<endl;
    }

    return 0;
}