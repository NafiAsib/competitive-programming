#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    int i, n, m, earn = 0, ara[222], count = 0;
    cin>>n>>m;
    for(i = 0; i < n; i++) cin>>ara[i];
    sort(ara, ara+n);
    for(i = 0; i < n; i++) {
        if(count >= m) break;
        if(ara[i] < 0) {
            earn += ara[i];
            count++;
        }
    }
    cout<<-earn<<endl;

    return 0;
}