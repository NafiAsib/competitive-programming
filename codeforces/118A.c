#include <stdio.h>
#include <string.h>
int main()
{
    char str[300], str2[300], str3[300];
    gets(str);
    int n,i,j;

    n = strlen(str);

    //removing vowel

    for(i = 0, j = 0; i < n; i++)
    {
        if(str[i] != 'A' && str[i] != 'E' && str[i] != 'Y' && str[i] != 'y' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' && str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' )
        {
            str2[j] = str[i];
            j++;
        }
    }

    str2[j] = '\0';

    //printf("%s\n", str2);

    //lowercasing

    for(i = 0; i < strlen(str2); i++)
    {
        if(str2[i] >= 65 && str2[i] <= 90)
        {
            str2[i] = str2[i] + 32;
        }
    }

    //printf("%s\n", str2);

    for(i = 0; i < 300; i++)
    {
        str3[i] = '.';
    }

    int k = 0;
    for(i=1;i<300;i+=2)
    {
        str3[i]=str2[k];
        k++;
    }

    str3[i] = '\0';

    for(i = 0; i <strlen(str3)-1; i++)
    {
        printf("%c",str3[i]);
    }

    return 0;
}
