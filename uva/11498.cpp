#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k, o, i, x, y;
    while((scanf("%d", &k)) == 1)
    {
        if(k == 0)
            break;

        cin>>n>>m;
        for(i = 0; i < k; i++)
        {
            cin>>x>>y;

            if(n == x || m == y)
                cout<<"divisa"<<endl;

            else if(x > n && y > m)
                cout<<"NE"<<endl;

            else if(x < n && y > m)
                cout<<"NO"<<endl;

            else if(x < n && y < m)
                cout<<"SO"<<endl;

            else if(x > n && y < m)
                cout<<"SE"<<endl;
        }
    }

    return 0;
}