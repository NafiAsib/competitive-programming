#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int ans = 0;
    cin>>n;
    int x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x != 1) ans++;
    }
    cout<<ans<<endl;
    return 0;
}