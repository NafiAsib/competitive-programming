#include <bits/stdc++.h>

using namespace std;

//#define watch(x) cout<<(#x)<<" is "<<(x)<<"\n"

typedef long long ll;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(NULL);
    
    ll i, a, b, n, c, count = 0, max = 0;
    bool flag = 0;

    while(1) {
        cin >> a >> b;
        if(a == 0 and b == 0) break;
        if(a > b) {
            swap(a,b);
            flag = 1;
        }
        
        for(i = a; i <= b; i++)
        {
            n = i;
            while(1)
            {
                if(n == 1 && count != 0){
                    count++;
                    break;
                }
                if(n&1) {
                    n = (3*n)+1;
                    count++;
                }
                else {
                    n /= 2;
                    count++;
                }
            }
            if(count > max) {
                max = count;
                c = i;
            }
            count = 0;
        }
        //if(flag == 1) {swap(a,b);}
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n", a, b, c, max-1);
        max = 0;
        flag = 0;
    }
    
    return 0;
}