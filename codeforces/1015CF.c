#include <stdio.h>

int ara[101];

int main()
{
    int n, m, l, r, i, count = 0;
    scanf("%d %d", &n, &m);
    while(n--)
    {
        /*for(i = 0; i <= m; i++)
        {
            ara[i] = 0;
        }*/
        
        scanf("%d %d", &l, &r);
        for(i = l; l <= r; i++)
        {
            ara[i] = l;
            l++;
        }
    }

    for(i = 1; i <= m; i++)
    {
        if(ara[i] == 0)
        {
            count++;
        }
    }
    printf("%d\n", count);
    for(i = 1; i <= m; i++)
    {
        if(ara[i] == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}