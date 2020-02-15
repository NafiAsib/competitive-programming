#include <iostream>

using namespace std;

int main()
{
    int n, i, j, count = 0, num, sum = 0;

    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> num;
        sum += num;
    }

    n = n + 1;

    if((sum+1)%n != 1) count++;
    if((sum+2)%n != 1) count++;
    if((sum+3)%n != 1) count++;
    if((sum+4)%n != 1) count++;
    if((sum+5)%n != 1) count++;

    cout << count << endl;

    return 0;
}
