#include <stdio.h>
int main()
{
    int x = 0;
    int n,i,j;
    char str[10];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf(""%s, str);

        if( str[1] == '-'){
            x = x - 1;
        }

        else if(str[1] == '+') {
            x = x + 1;
        }

        else {
            x = x;
        }
    }

    printf("%d", x);

    return 0;
}
