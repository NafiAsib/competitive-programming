#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, steps = 0;
    cin>>n;
    while(n != 0)
    {
        if(n >= 5)
        {
            steps += 1;
            n = n - 5;
        }
        else if(n >= 4)
        {
            steps += 1;
            n = n - 4;
        }
        else if(n >= 3)
        {
            steps += 1;
            n = n - 3;
        }
        else if(n >= 2)
        {
            steps += 1;
            n = n - 2;
        }
        else if(n >= 1)
        {
            steps += 1;
            n = n - 1;
        }
    }

    cout<<steps<<endl;

    return 0;
}