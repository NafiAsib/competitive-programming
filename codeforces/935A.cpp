#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n, x, y, move = 0, sum = 0;;

    cin>>n;

    for(i = 1; i <= n/2; i++)
    {
        x = i;
        y = (n - x)/x;
        if(y*x == (n-x))
        {
            for(j = 1; j <= x; j++)
            {
                sum += (1+y);
            }

            if(sum == n) move++;

            sum = 0;
        }
    }

    cout<<move<<endl;

    return 0;
}