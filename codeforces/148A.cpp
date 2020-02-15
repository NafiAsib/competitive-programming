#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, l, m, n, d, flew = 0;

    cin>>k>>l>>m>>n>>d;

    /*if(k == 1)
    {
        cout<<d<<endl;
        break;
    }*/

    for(int i = 1; i <= d; i++)
    {
        if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0)
            flew += 1;
    }

    cout<<flew<<endl;


    return 0;
}