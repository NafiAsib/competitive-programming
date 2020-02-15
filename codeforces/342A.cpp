#include <bits/stdc++.h>

using namespace std;
int ara[100000];

int main()
{
    int n, i = 0;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    sort(ara, ara+n);

    /*printf("\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\n", ara[i]);
    }*/

    for(i = 0; i < n; i++)
    {
        if(ara[i] == 1)
        {
            count += 1;
            ara[i] = ara[i] + 9;
            for(j = i+1; j < n; j++)
            {
                if(ara[i] == 2)
                {
                    ara[i] = ara[i] + 9;
                    count += 2;
                }
                else if(ara[i] == 3)
                {
                    ara[i] = ara[i] + 9;
                    count += 3;
                }
                else if(ara[i] == 4)
                {
                    ara[i] = ara[i] + 9;
                    count += 4;
                }
                else if(ara[i] == 6)
                {
                    ara[i] = ara[i] + 9;
                    count += 6;
                }

                if(count >= 7 || count >= 9 || count >= 10)
                    break;
            }
        }
        if(count == 7)
    }

    return 0;

}