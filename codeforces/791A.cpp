#include <iostream>

using namespace std;

int main()
{
    int i, j, a, b, year = 0;

    cin >> a >> b;

    while(1)
    {
        if(a>b) break;

        a *= 3;
        b *= 2;
        year += 1;
    }

    cout << year <<endl;

    return 0;
}
