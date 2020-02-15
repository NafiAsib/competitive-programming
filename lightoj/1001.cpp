#include <stdio.h>
int main()
{
    int T,n,i,c,d;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d", &n);
        if(n>5)
        {
        c=n-2;
        d=2;
        printf("%d %d\n",c,d);
        }
        else
        {
            c=n-1;
            d=1;
            printf("%d %d\n",c,d);

        }
    }
    return 0;
}
