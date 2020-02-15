#include <bits/stdc++.h>
#define endl "\n"
#define PI acos(-1)
using namespace std;
const int size = 1e6+5;
double logg[size];
int main()
{
    int i, j, n, t, b;

    logg[0] = 0;
    for(i = 1; i < size; i++) {
        logg[i] = logg[i-1] + log(i);
    }

    cin >> t;

    for(i = 1; i <= t; i++) {
        cin >> n >> b;
        cout << "Case " << i << ": " << fixed << (int)floor(logg[n]/log(b)) + 1 << endl;
    }

    return 0;
}
