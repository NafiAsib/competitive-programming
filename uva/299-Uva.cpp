#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, L, i, j, moves = 0, temp;
    int ara[51];

    scanf("%d", &n);

    while(n--)
    {
        scanf("%d", &L);
        moves = 0;
        for(i = 0; i < L; i++)
        {
            scanf("%d", &ara[i]);
        }
        for(i = 0; i < L - 1; i++)
        {
            for(j = L-1; j > i; j--)
            {
                if(ara[i] > ara[j])
                {
                    temp = ara[i];
                    ara[i] = ara[j];
                    ara[j] = temp;
                    moves++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", moves);
    }

    return 0;
}