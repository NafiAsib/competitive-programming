#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, num, hi = 0, index = 0, i, calc;

    cin>>n>>m;

    for(i = 1; i <= n; i++) {
        cin>>num;
        calc = (num/m);
        if(m*calc != num) calc += 1;
        //i/nt temp = (num%m)>0;
        //cout<<temp<<endl;
        if(calc >= hi) {
            hi = calc;
            index = i;
        }
    }

    cout<<index<<endl;

    return 0;
}