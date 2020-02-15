#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    double count = 0, x, res;
    cin>>n;
    
    for(i = 0; i < n; i++)
    {
        cin>>x;
        count = count + x;
    }

    //res = count/n;

    cout<<x<<endl;
    cout<<n<<endl;

    cout<<x/n<<endl;

    return 0;
}