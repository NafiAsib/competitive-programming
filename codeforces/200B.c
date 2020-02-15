#include <stdio.h>

int main()
{
    int n, i;
    double x, res, count = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%lf", &x);
        count = count + x;
    }
    res = count / n;
    printf("%0.12lf", res);
    
    return 0;
}