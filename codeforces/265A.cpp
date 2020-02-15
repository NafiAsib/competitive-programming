#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[51], str2[51];
    int i, j = 0, count = 1, len1, len2;

    cin >> str >> str2;

    len1 = strlen(str2);
    len2 = strlen(str);

    for(i = 0; i < len1; i++)
    {
        if(j >= len2) break;
        if(str2[i] == str[j])
        {
            count += 1;
            j += 1;
        }
    }

    cout << count << endl;

    return 0;
}
