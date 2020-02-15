#include <iostream>

using namespace std;

int main()
{
    char ara[200][200];
    int i, j, n, col, row;
    int flag = 0;

    cin>>row>>col;

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            cin>>ara[i][j];
        }
    }

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(ara[i][j] == '.')
            {
                if(flag == 0)
                {
                    ara[i][j] = 'B';
                    flag = 1;
                }

                if(ara[i-1][j] == 'B')
                {
                    if (i >= 0 || i < row || j >= 0 || j < col)
                    {
                        ara[i][j] = 'W';
                        flag = 1;
                    }
                }
                if(ara[i][j-1] == 'B')
                {
                    if (i >= 0 || i < row || j >= 0 || j < col)
                    {
                        ara[i][j] = 'W';
                        flag = 1;
                    }
                }
                if(ara[i+1][j] == 'B')
                {
                    if (i >= 0 || i < row || j >= 0 || j < col)
                    {
                        ara[i][j] = 'W';
                        flag = 1;
                    }
                }
                if(ara[i][j+1] == 'B')
                {
                    if (i >= 0 || i < row || j >= 0 || j < col)
                    {
                        ara[i][j] = 'W';
                        flag = 1;
                    }
                }
                if(flag == -1) ara[i][j] = 'B';
                flag = -1;
            }
            else if(ara[i][j] == '_') ara[i][j] = '_';
        }
    }

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            cout<<ara[i][j];
        }
        cout<<endl;
    }
}
