#include <stdio.h>

int main()
{
    int n, i, m;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        if(i == 0 || i%2 == 0 )
            printf("I hate ");
        else
            printf("I love ");

        if(i == n-1) 
            break;
        
        printf("that ");
    }

    printf("it");

    return 0;
}