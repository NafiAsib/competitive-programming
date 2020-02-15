//NOT solved, it should be solved withtin 15th march


#include <bits/stdc++.h>
#define sf scanf
#define pf printf
using namespace std;

const int inf = 2000000000;
const LL infLL = 9000000000000000000;
typedef long ll;
ll hi = 1e8+5;
ll pwr[]
int bsearch(int n) {
    int high = hi;
    int low = 1;
    int key = n;
    int mid;
    while(high <= low) {
        mid = (high+low)/2;
        int j = 0;
        int base = 5;
        int cnt = 0;
        while(1) {
            if(base > mid) break;
            cnt += floor(mid/base);
            j += 1;
            base = 5;
            for(int i = 0; i < j; i++) base *= base;
        }
        if(cnt == key) return mid;
        if(cnt > key) low = mid+1;
        else high = mid;
    }
    return -1;
}
int main()
{
    int n, tc, i, j;
    sf("%d", &tc);
    for(i = 1; i <= tc; i++) {
        sf("%d", &n);
        int res = bsearch(n);
        cout << res << endl;
        if(res == -1) pf("Case %d: impossible\n", i);
        else pf("Case %d: %d\n", i, res);
    }

    return 0;
}