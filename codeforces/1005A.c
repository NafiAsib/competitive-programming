#include <stdio.h>

int main()
{
    int ara[1001];
    int n, t = 0, steps = 1, i, j = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(ara[i] == 1)
            t += 1;
    }
    

    printf("%d\n", t);

    for(i = 0; i < n; i++)
    {
        if(ara[i] == 1)
        {
            steps = 1;
            j = i + 1;

            for(; ara[j] != 1; j++)
            {
                if(j >= n)
                    break;
                steps += 1;
            }
            printf("%d ", steps);
        }
        
    }

    return 0;
}