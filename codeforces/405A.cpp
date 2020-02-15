#include <iostream>

using namespace std;

int main()
{
    int i, j, n, ara[105], low = 0, t;
    //bool flag = false;

    cin >> n;

    for(i = 0; i < n; i++) cin >> ara[i];

    for(i = 0; i < n - 1; i++)
    {
        low = i;
        for(j = i+1; j < n; j++)
        {
            if(ara[low] > ara[j])
            {
                low = j;
                //flag = true;
            }
        }

        if(low != i)
        {
            t = ara[low];
            ara[low] = ara[i];
            ara[i] = t;
        }

        //flag = false;
    }

    for(i = 0; i < n; i++) cout << ara[i] << " ";

    cout << endl;

    return 0;
}