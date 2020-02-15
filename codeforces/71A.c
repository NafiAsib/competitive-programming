#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int len,i,j,n;
    scanf("%d", &n);
    for(j=0; j<n;j++)
    {
        for(i=0;i<1;i++)
        {
            scanf("%s",str);
            len=strlen(str);
            if(len<=10)
            {
                printf("%s\n",str);
            }
            else
            {
              printf("%c%d%c\n",str[0],len-2,str[len-1]);
            }

        }

    }
    return 0;
}
