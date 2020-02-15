#include <iostream>
using namespace std;

int main()
{
    int n, v, cost = 0, i, cap;
    cin >> n >> v;
    cap = v;
    if(cap >= n-1) {cout<<n-1<<endl; return 0;}
    cost = v;
    for(i = 2; i <= n; i++) {
        cap--;
        //if(cap >= (n-i)) break;
        if(cap < (n-i)) {
            cost +=(v-cap)*i;
            cap +=(v-cap);  
        }
        
    }
    cout << cost << endl;

    return 0;
}