#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ara[n+2];
    for(int i=0; i<n; i++) cin>>ara[i];
    int m = 1<<n;
    for(int i=0; i<m; i++) {
        int sum = 0;
        for(int j=0; j<n; j++) {
            if(i&(1<<j)) sum+=ara[j];
            else sum -= ara[j];
        }
        if(sum == 0 || (sum%360)==0) {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}