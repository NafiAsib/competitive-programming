 #include <iostream>

using namespace std;

int main()
{
    int arr[101][2], n, i, j, k, l, count = 0;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 2; j++)
        {
            for(k = 0; k < n; k++)
            {
                for(l = 0; l < 2; l++)
                {
                    if(i != k && j != l && arr[i][0] == arr[k][1]) count += 1;
                }
            }
        }
    }

    cout << count / 2<< endl;

    return 0;
}
