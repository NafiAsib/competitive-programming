#include <iostream>

using namespace std;

int main()
{
    long long n = 1, i, j, num, bact = 2;

    cin >> num;


    while(true)
    {
        if(num == 1)
        {
            n = 1;
            break;
        }
        if(num == 2) break;
        if(num%2 == 1)
        {
            n++;
            num--;
        }

        else num /= 2;
    }

    cout << n << endl;

    return 0;
}
