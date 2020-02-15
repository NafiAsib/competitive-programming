#include <stdio.h>
int main()
{
    int n;
    int i;
    int a, b, c;
    int p = 0, v = 0, t = 0, sol = 0, j = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);

        if(a == 1)
            p++;

        if(b == 1)
            v++;

        if(c == 1)
            t++;

        j = p + v + t;

        v = 0;
        p = 0;
        t = 0;

        if(j >= 2)
            sol++;
    }

    printf("%d", sol);

    return 0;

}
