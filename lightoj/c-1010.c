#include <stdio.h>

int main()
{
    int T, i, m, n, mn, x, ans;
    scanf("%d", &T);
    
    for(i = 1; i <= T; i++)
    {
        scanf("%d %d", &m, &n);

        mn = m * n;

        if(m == 1 || n == 1)
            ans = mn;

        else if(m == 2 || n == 2)
        {
            if(m == 2) x = n;
            else x = m;
            if(x%4 == 1)      ans = x+1;
            else if(x%4 == 2) ans = x+2;
            else if(x%4 == 3) ans = x+1;
            else if(x%4 == 0) ans = x;
        }

        else if(mn % 2 != 0)
            ans = ((m*n)/2)+1;

        else
            ans = ((m*n)/2);

        printf("Case %d: %d\n", i, ans);
    }

    return 0;
}