#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int T;
    long long s, r, y, x, i;
    cin>>T;

    for(i = 1; i <= T; i++)
    {
        cin>>s;
        r = ceil(sqrt(s));
        if(r*r % 2 == 0)
        {
            if((r*r - s) + 1 < r)
            {
                x = r;
                y = ((r*r - s) + 1);
            }

            else if((r*r - s ) + 1 > r)
            {
                y = r;
                x = s- (r-1)*(r-1);
            }

            else
            {
                x = r;
                y = r;
            }
        }
        else if(r*r % 2 != 0)
        {
            if((r*r - s) + 1 < r)
            {
                y = r;
                x = ((r*r -s) + 1);
            }

            else if((r*r - s) + 1  > r)
            {
                x = r;
                y = s - (r-1)*(r-1);
            }
            else 
            {
                x = r;
                y = r;
            }
        }
        
        cout<<"Case "<<i<<": "<<x<<" "<<y<<endl;
    }

    return 0;
}