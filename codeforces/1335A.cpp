#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("../io/in.txt", "r", stdin);
    int tc;
    cin>>tc;
    while(tc--) {
        int n;
        cin>>n;
        int ans;
        ans = n/2 + !(n%2 == 0);
        cout<<ans-1<<"\n";
    }

    return 0;

}