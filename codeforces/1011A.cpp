#include <stdio.h>

int main()
{
    int n, k, i, j, len = 0, ans = 0;
    char stage[51];
    char temp;

    scanf("%d %d", &n, &k);

    scanf("%c", &temp);

    /*for(i = 0; i < n; i++)
    {
        scanf("%c", &stage[i]);
    }

    stage[i] = '\0';*/

    scanf("%s", stage);

    /*for(i = 0; i < n; i++)
    {
        printf("%d\n", stage[i]);
    }*/

    for(i = 0; i < n; i++)
    {
        for(j = n-1; j > i; j--)
        {
            if(stage[i] > stage[j])
            {
                temp = stage[i];
                stage[i] = stage[j];
                stage[j] = temp;
            }
        }
    }

    //printf("%s", stage);

    char cmp = 95;


    for(i = 0; i < n; i++)
    {
        if(stage[i] >= cmp + 2)
        {
            cmp = stage[i];
            ans += stage[i] - 96;
            len++;
            if(len >= k)
            {
                printf("%d", ans);
                break;
            }

        }
    }

    if(len < k)
        printf("-1");

    return 0;
}