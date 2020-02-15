#include <stdio.h>
int main()
{
    int n,m,a,i=0,j=0,div;
    int r=0, c=0;
    double ans;
    scanf("%d %d %d", &n, &m, &a);

    r=n/a;
    if(n%a!=0) {
        r++;
    }
    else{
        r=r;
    }

    c=m/a;
    if(m%a!=0) {
        c++;
    }
    else {
        c=c;
    }

    ans=r*c;

    printf("%.0lf",ans);
    return 0;
}
