//11/Feb/19 LightOJ
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
    /* #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    sync_off(); */
    int T, i, j;
    double AB, AC, AE, DE, BC, EC, BD, AD, ADE, BDEC, R, high, low, height, s1, s2, dum_tri, dum_R, X;
    cin >> T;

    for(i = 1; i <= T; i++) {
        cin >> AB >> AC >> BC >> R;
        high = AB;
        low = 0.0;
        int q = 100;
        while(q--) {
            X = (double)(high+low)/2;
            AD = X;
            AE = (AD*AC)/AB;
            DE = (AD*BC)/AB;
            BD = AB - AD;
            EC = AC-AE;
            s1 = (BD+EC+(BC-DE))/2;
            dum_tri = sqrt(s1*(s1-BD)*(s1-EC)*(s1-(BC-DE)));
            height = (2*dum_tri)/(BC-DE);
            BDEC = ((DE+BC)*height)/2;
            s2 = (AD+DE+AE)/2;
            ADE = sqrt(s2*(s2-AD)*(s2-DE)*(s2-AE));
            dum_R = (double)(ADE/BDEC);
            if(dum_R > R) high = X;
            else low = X;
        }
        cout<<"Case "+to_string(i)+": "<<fixed<<setprecision(6)<< AD << endl;
    }
    return 0;
}