#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i,j;
    gets(str);
    int one, zero;

    if(strlen(str) < 7)
    {
        printf("No");
    }

    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] == '0')
        {
            zero = 0;
            for(j = i; j <= i+7; j++)
            {
                if(str[j] == '0')
                {
                    zero++;
                }
                else if(str[j] = '\0')
                    break;
            }
            if(zero > 6)
                {
                    printf("Yes");
                    break;
                }
        }

        else if(str[i] == '1')
        {
            one = 0;
            for(j = i; j < i+7; j++)
            {
                if(str[j] == '1')
                {
                    one++;
                }
                else if(str[j] = '\0')
                    break;
            }
            if(one > 6)
                {
                    printf("Yes");
                    break;
                }
        }
        else if(one < 7 && zero < 7)
            printf("No");

    }

    return 0;
}
