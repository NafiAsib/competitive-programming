#include <iostream>

using namespace std;

int main()
{
    int a, b, i, n, group = 0;

    cin >> n;
    cin >> a;

    n -= 1;

    while(n--)
    {
        cin>> b;

        if(a != b) group += 1;

        a = b;
    }

    cout<<group+1<<endl;

    return 0;
}