#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ara[100], j = 97;
    int i, n;

    cin>>n;

    for(i = 0; i < n; i++)
    {
        if(j > 'd') j = 'a';

        ara[i] = j;
        j++;
    }

    ara[n] = '\0';

    cout<<ara<<endl;

    return 0;
}