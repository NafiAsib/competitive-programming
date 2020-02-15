#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
using namespace std;

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);

    int h, d, f;
    float u;

    while (1)
    {
        cin >> h >> u >> d >> f;
        if (h == 0)
            break;
        int day = 1;
        float height = 0;
        float fatigue = (u * f) / 100;
        while (1)
        {
            height += u;
            if(u > 0) u -= fatigue;
            if(height > h) break;
            height -= d;
            if(height < 0) break;
            day++;
        }
        if(height > h) cout<<"success on day "<<day<<endl;
        else if(height < 0) cout<<"failure on day "<<day<<endl;
    }

    return 0;
}