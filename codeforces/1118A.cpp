//ACed My error was not calculating 2a, I was checking if a < b where a was for 1 ltr and b was for 2 ltr
#include <iostream>
#include <cmath>
#define sf scanf
#define pf printf
using namespace std;
//typedef long long ll;
//typedef unsigned int ui;

int main()
{
    //freopen("in.txt", "r", stdin);
    unsigned long long n;
    int i, tc, j, a, b;
    cin >> tc;
    while(tc--) {
        cin >> n >> a >> b;
        //if(n == 1) {cout << a << endl; continue;}
        if(n%2 == 0) {
            if(2*a < b) cout << n*a << endl;
            else cout << (n/2)*b << endl;
        }
        else {
            if(2*a < b) cout << n*a << endl;
            else {
                cout << (long long)floor(n/2)*b+a << endl;
            }
        }
    }

    return 0;
}