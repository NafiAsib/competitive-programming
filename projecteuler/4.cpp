//14/Jan/19 ProjectEuler
#include <bits/stdc++.h>
#define endl "\n"
#define PI acos(-1)
#define sync_off() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define RESET(a,b)	memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define count_one(a) __builtin_popcount(a)  // Returns the number of set bits(1) in a number(a). In long long use __builtin_popcountll(a)
#define parity(i)   __builtin_parity(i)  //even parity 0 and odd parity 1
#define blz(a)   __builtin_clz(a) //Returns the number of leading zeroes in a number(a)
#define btz(a)   __builtin_ctz(a) //Returns the number of trailing zeroes in a number(a)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define pf printf
#define sf scanf
#define pb push_back
using namespace std;
 
typedef long long ll;
typedef vector< int > vi;
//const int size = 1e6+5;
//const double PI acos(-1)

int isPalindrome(int n) {
    int f = n%10;
    n /= 10;
    int s = n%10;
    n /= 10;
    int t = n%10;
    n /= 10;
    int fo = n%10;
    n /= 10;
    int fi = n%10;
    n /= 10;
    int si = n%10;
    n /= 10;
    if(f == si and s == fi and t == fo) return 1;
    return 0;

}
 
int main()
{
    /* #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    sync_off(); */
    int a = 999, b = 999, i, res = 0, max = 0, j;
    for(i = 999; i > 100; i--) {
        for(j = 100; j <= 999; j++) {
        res = i*j;
        if(isPalindrome(res)) {
                if(res > max) max = res;
            }
        }
    }
    cout << max << endl;
    return 0;
}