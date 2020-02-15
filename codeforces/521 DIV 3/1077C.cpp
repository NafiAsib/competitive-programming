#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
using namespace std;

const int N = 1e6+20;
int ara[N];

int main()
{
    int n, i, j, maxx;
    ll sum = 0;
    cin >> n;
    for(i = 0; i < n; i++) cin >> ara[i];
    for(i = 0; i < n; i++) {
        maxx = INT_MIN;
        sum = 0;

        for(j = 0; j < n; j++) {
            if(j == i) continue;
            if(maxx < ara[j]) maxx = j;
            sum += ara[j];
        }
        if((sum - ara[maxx]) == ara[maxx]) cout<<i<<" ";
    }
    cout << endl;
    return 0;
}
