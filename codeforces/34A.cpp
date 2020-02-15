#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    int n, ara[109], i, j, min = 100000, x = 0, y = 0;

    cin>>n;
    for(i = 0; i < n; i++) cin>>ara[i];

    min = abs(ara[0]-ara[n-1]);
    x = 0;
    y = n-1;
    for(i = 0; i < n; i++) {
        if(abs(ara[i]-ara[i+1]) < min) {
            min = abs(ara[i]-ara[i+1]);
            x = i;
            y = i+1;
        }
    }

    cout<<x+1<<" "<<y+1<<endl;

    return 0;   
}