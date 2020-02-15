//11/Feb/19 LightOJ
#include <bits/stdc++.h>
#define endl "\n"
#define sync_off() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define RESET(a,b)	memset(a,b,sizeof(a))

/* #define PI acos(-1)
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
 */
using namespace std;
 
typedef long long ll;
typedef vector< int > vi;
//const int size = 1e6+5;
//const double PI acos(-1)
 
int n,m;
int vessel[1009];

int container(int mid)
{
    int milk = 0, cnt = 1;
    for(int i = 0; i < n; i++) {
        if(vessel[i] > mid) return 1000000000;
        if(milk+vessel[i] <= mid) milk += vessel[i];
        else {
            milk = vessel[i];
            cnt++;
        }
    }

    return cnt;
}

int bisection()
{
    unsigned int i, j = 100, high = 1000000000, low = 0, mid;
    while(j--) {
        mid = (high+low)/2;
        if(container(mid) <= m) high = mid;
        else low = mid+1;
    }
    return mid;
}

int main()
{
    /* #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    sync_off(); */
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++) {
        cin >> n >> m;
        for(int j = 0; j < n; j++) {cin >> vessel[j];}
        cout << "Case "<<i<<": "<<bisection()<<endl;
    }

    return 0;
}