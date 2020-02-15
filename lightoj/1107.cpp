#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, x1, y1, x2, y2, M, x, y, i;
    cin>>T;
    for(i = 1; i <= T; i++)
    {
        cin>>x1>>y1>>x2>>y2>>M;
        cout<<"Case "<<i<<":"<<endl;
        while(M--)
        {
            cin>>x>>y;
            if(x >= x1 && x <= x2 && y >= y1 && y <= y2) 
            {
                cout<<"Yes"<<endl;
            }
            else 
                cout<<"No"<<endl;
        }
    }

    return 0;
}