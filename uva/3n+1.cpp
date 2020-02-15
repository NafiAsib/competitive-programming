#include <bits/stdc++.h>

using namespace std;

#define watch(x) cout<<(#x)<<" is "<<(x)<<"\n"

typedef long long ll;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(NULL);

    int n, a, b, count = 0, max = 0;
    bool flag = 0;

    //cin >> a >> b;

    while(scanf("%d %d", &a, &b)==2)
    {
        if(a > b) {
            swap(a,b);
            flag = 1;
        }
        for(int i = a; i <= b; i++)
        {
            n = i;
            while(1)
            {
                if(n == 1){
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
            if(count >= max) max = count;
            count = 0;
        }
        if(flag == 1) swap(a,b);
        cout << a <<" "<<b<<" "<<max<<"\n";
        max = 0;
        flag = 0;
    }


    return 0;
}