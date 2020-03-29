#include <bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
	    freopen("../io/in.txt", "r", stdin);
	    // freopen("../io/out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long n, s;
        cin>>n>>s;
        long long ara[n];
        for(int i=0; i<n; i++) {
            cin>>ara[i];
        }
        sort(ara, ara+n);
        long long sum[n];
        sum[0] = ara[0];
        bool found = false;
        for(int i=1; i<n; i++) sum[i] = sum[i-1] + ara[i];

        for(int i=0; i<n; i++) {
            if((sum[i]+(((n-1)-i)*ara[i])==s)) {
                cout<<ara[i]<<endl;
                found = true;
                break;
            }
        }
        if(!found) cout<<"-1"<<endl;
    }
    return 0;
}