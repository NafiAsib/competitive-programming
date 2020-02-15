#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int ara[300], n, k, x, i, j = 0, hi = 0, cons_hi;

    cin >> n >> k;

    x = (2*n) + 1;
    //cout << x << endl;
    memset(ara, 0, sizeof(ara));

    for(i = 0; i < x ; i++)
    {
        cin >> ara[i];
    }

    for(i = 0; i < x; i++)
    {
        if(k > 0 && ara[i] > ara[i+1] + 1 && ara[i] > ara[i-1] + 1)
        {
            ara[i] -= 1;
            k -= 1;
        }
    }

    for(i = 0; i < x; i++)
    {
        cout << ara[i] <<" ";
    }

    cout << endl;

    return 0;
}
