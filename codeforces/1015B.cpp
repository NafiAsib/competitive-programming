#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main()
{
    char s1[51], s2[51];
    vector< int > index;
    char t, temp;
    int i, j, n, moves = 0, similar;

    cin>>n>>s1>>s2;

    i = 0;

    while(strcmp(s1, s2) != 0)
    {
        if(s1[i] != s2[i])
        {
            t = s2[i];

            similar = 0;

            for(j = i; j < n; j++)
            {
                if(t == s1[j])
                {
                    s1[j] = s1[j-1];
                    s1[j-1] = t;
                    index.push_back(j);
                    moves++;
                    similar++;
                    i = 0;
                    break;
                }
            }

            if(similar == 0)
            {
                cout<<"-1"<<endl;
                return 0;
            }
        }

        else i++;
    }

    cout<<moves<<endl;
    i = index.size();
    for(j = 0; j < i; j++)
    {
        cout<<index[j]<<" ";
    }

    cout<<endl;

    return 0;
}