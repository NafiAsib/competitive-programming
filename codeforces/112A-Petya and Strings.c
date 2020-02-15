#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    char str2[101];
    int i, value = 0;

    scanf("%s", str);
    scanf("%s", str2);

    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }

    for(i = 0; i < strlen(str2); i++)
    {
        if(str2[i] >= 97 && str2[i] <= 122)
        {
            str2[i] = str2[i] - 32;
        }
    }

    for(i = 0; i <strlen(str); i++)
    {
        if(str[i] > str2[i])
        {
            value++;
            break;
        }

        else if(str[i] < str2[i])
        {
            value--;
            break;
        }
    }

    printf("%d", value);

    return 0;
}
