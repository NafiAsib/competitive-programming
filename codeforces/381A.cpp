#include <iostream>
#include <vector>
//#include <algorithm>

using namespace std;

int main()
{
    vector< int > v;
    int n, i ,j, sereja = 0, dima = 0, samne, pise;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> j;
        v.push_back(j);
    }

    samne = 0;
    pise = n-1;

    for(i = 1; i <= n; i++)
    {
        if(i & 1)
        {
            if(v[samne] > v[pise])
            {
                sereja += v[samne];
                samne += 1;
            }
            else
            {
                sereja += v[pise];
                pise -= 1;
            }
        }

        else
        {
            if(v[samne] > v[pise])
            {
                dima += v[samne];
                samne += 1;
            }
            else
            {
                dima += v[pise];
                pise -= 1;
            }
        }
    }

    cout << sereja <<" "<< dima;


    return 0;
}
