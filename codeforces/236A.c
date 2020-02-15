#include <stdio.h>
#include <string.h>



int main()
{
    char s[101], a[101];
    int i, j, k = 0, len, n = 0;

    gets(s);

    for(i = 0; i < strlen(s); i++)
    {
        for(j = 0; j < k+1; j++)
        {
            if(s[i] == a[j])
                n++;
        }
        if(n == 0)
        {
            a[k] = s[i];
            k += 1;
        }
        n = 0;
    }

    if(k % 2 == 0)
        printf("CHAT WITH HER!\n");

    else if(k % 2 != 0)
        printf("IGNORE HIM!\n");

    return 0;
}