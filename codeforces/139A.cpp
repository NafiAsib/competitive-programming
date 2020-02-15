#include <iostream>

using namespace std;

int main()
{
    int ara[7], i , j, n, sum = 0, num;

    cin >> n;

    for(i = 0; i < 7; i++) cin >> ara[i];

    i = 0;

    while(1)
    {
        if(i > 6) i = 0;
        sum += ara[i];
        if(sum >= n)
        {
            cout<<i+1<<endl;
            break;
        }
        i++;
    }

    return 0;
}
