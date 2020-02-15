#include <iostream>

using namespace std;

int main()
{
    int i, n, h, a, count = 0;

    cin >> n >> h;

    for(i = 0; i < n; i++)
    {
        cin>> a;
        if(a > h) count += 2;
        else count += 1;
    }

    cout << count <<endl;

    return 0;
}