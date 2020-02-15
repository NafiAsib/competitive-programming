//16/Jan/19 UVa
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
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    sync_off();

    unsigned int heights[50005], i, j, q, n, h;
    cin >> n;
    for(i = 0; i < n; i++) cin >> heights[i];
    cin >> q;
    while(q--) {
        cin >> h;
        unsigned int* upper = upper_bound(heights, heights+n, h);
        unsigned int* lower = upper;
        lower--;
        
            while(lower >= heights && *lower == h) {
                lower--;
            }
        

        if(lower >= heights) cout << *lower << " ";
        else cout <<"X ";

        if(upper == heights+n) cout << "X";
        else cout<<*upper;
        
        cout << endl;
    }

    return 0;
}