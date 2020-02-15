#include <stdio.h>
int main()
{
    int ara[50];
    int n, k, i;
    int m=0;

    scanf("%d %d", &n, &k);

    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }

    k = ara[k-1];

    for(i = 0; i < n; i++) {
        if(ara[i]>=k && ara[i]>0) {
            m++;
        }
    }

    printf("%d", m);

    return 0;
}
