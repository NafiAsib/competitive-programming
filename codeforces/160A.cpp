#include <bits/stdc++.h>

using namespace std;

int main()
{
    int coins[102], n, sum = 0, twin = 0, i;
    cin>>n;

    for(i = 0; i < n; i++) {
        cin>>coins[i];
        sum += coins[i];
    }
    sort(coins, coins+n, greater<int>());
    i = 0;
    sum /= 2;
    while(sum >= twin) {
        twin += coins[i];
        i++;
    }

    cout<<i<<endl;

    return 0;
}