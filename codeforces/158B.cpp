#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int ara[5], i, j, n, a, count = 0;

    memset(ara, 0, sizeof(ara));

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin>> a;
        ara[a]++;
    }

    //for(i = 1; i < 5; i++) cout << ara[i];
    //cout << endl;

    count += ara[4];

    if(ara[3] > ara[1])
    {
        count += ara[3];
        ara[1] = 0;
    }

    else if(ara[1] > ara[3])
    {
        count += ara[3];
        ara[1] -= ara[3];
    }

    if(ara[2] % 2 == 0)
    {
        count += ara[2]/2;

        count +=
    }

    else
    {

    }

    cout << count <<endl;

    return 0;
}
