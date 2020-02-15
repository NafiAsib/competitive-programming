#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[2002], b[2002];
    int i, n, j = 1, med;

    cin>>n>>a;

    //if(n%2 == 0)    med = n/2 - 1;
    //else    
    med = (n-1)/2;

    //cout<<med<<endl;

    b[med] = a[0];

    j = med+1;

    if(n%2 != 0)
    {
        for(i = 2; a[i] != '\0'; i = i+2)
        {
            b[j] = a[i];
            j += 1;
        }

        //b[j] = '\0';

        j = med - 1;

        for(i = 1; a[i] != '\0'; i = i+2)
        {
            b[j] = a[i];
            j--;
        }
    }

    if(n%2 == 0)
    {
        for(i = 1; a[i] != '\0'; i = i+2)
        {
            b[j] = a[i];
            j += 1;
        }

        //b[j] = '\0';

        j = med - 1;

        for(i = 2; a[i] != '\0'; i = i+2)
        {
            b[j] = a[i];
            j--;
        }
    }

    b[n] = '\0';

    cout<<b<<endl;

    return 0;
}