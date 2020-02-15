#include <stdio.h>
int main()
{
    int m,n,box,c,d=0,rem=0;
    scanf("%d %d", &m, &n);

    box = m * n;

    while(box!=0)
    {
        if(m%2==0)
        {
            d = d + m/2;
            box = box - d;
            rem = m - d;
        }
        else
        {
            d = d + m%2;
            box = box-d;
            rem = m - d;
        }

    }

    while(rem>2)
    {
        d = d + rem%2;
    }

    printf("%d",d);
    return 0;
}
