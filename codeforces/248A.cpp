#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int a, b, left = 0, right = 0, i, move = 0;

    double n;

    cin>>n;

    for(i = 0; i < n; i++)
    {
        cin>>a>>b;

        left += a;
        right += b;
    }

    if(left < ceil(n/2))
        move = move + left;

    else if(left >= ceil(n/2))
        move = move + (n - left);

    //cout<<ceil(n/2)<<endl;

    //cout<<move<<endl;

    if(right < ceil(n/2))
        move = move + right;

    else if(right >= ceil(n/2))
        move = move + (n - right);

    cout<<move<<endl;

    return 0;
}