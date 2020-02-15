#include <stdio.h>
int main()
{
    char str[1000];
    char c;
    scanf("%s",str);
    if(str[0]>=65 && str[0]<=90)
    {
        printf("%s",str);
    }
    else
    {
        str[0]='A'+(str[0]-'a');
        printf("%s",str);
    }
    return 0;
}
