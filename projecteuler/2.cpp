#include <bits/stdc++.h>
#define SIZE 4000000
typedef long long ll;
using namespace std;

int main()
{
    ll sum = 2, i, a = 1, fib = 2, temp;
    while(fib<=SIZE) {
        temp = fib;
        fib = fib+a;
        a = temp;
        if(fib%2 == 0) sum += fib;
    }

    cout << sum << endl;

    return 0;
}