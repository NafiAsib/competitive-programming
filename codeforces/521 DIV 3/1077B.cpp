#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
using namespace std;

int main()
{
    int ara[120], i, j, count = 0, n;

    cin >> n;
    for(i = 0; i < n; i++) cin >> ara[i];

    for(i = 0; i < n; i++) {
        if(ara[i] == 0) {
            if(ara[i-1] == ara[i+1]) {
                if(ara[i-1] == 1) {
                    ara[i+1] = 0;
                    count++;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}
