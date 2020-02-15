#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N, a, sum = 0, j, i;
    cin>>T;
    for(i = 1; i <= T; i++)
    {
        cin>>N;
        sum = -0;
        for(j = 0; j < N; j++)
        {
            cin>>a;
            if(a < 0) continue;
            sum += a;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }

    return 0;
}