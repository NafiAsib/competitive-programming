#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i,len,cas = 0;
    gets(str);
    len = strlen(str);

    for(i = 1; i < len; i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            cas +=1;

        }
    }

    if(cas == len-1)
    {
         if(str[0]>=97 && str[0]<=122)
         {
             str[0] = 'A' + (str[0]-'a');
             for(i = 1; i < len; i++)
        {
        if(str[i] >= 65 && str[i] <= 90)
        {
             str[i] = str[i] + 32;

        }
        }
         }

         else {
            for(i = 0; i < len; i++)
        {
            str[i] = 'a' + (str[i] - 'A');
        }

         }



    }


    printf("%s", str);

    return 0;
}

