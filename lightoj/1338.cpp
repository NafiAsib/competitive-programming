//08/Feb/19 LightOJ
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
    string a, b, c;
    int araa[123], arab[123];
    int i, j, T;
    cin >> T;

    getline(cin, c);
    for(i = 1; i <= T; i++) {
        
        RESET(araa, 0);
        RESET(arab, 0);
        getline(cin, a);
        getline(cin, b);
        bool flag = true;

        for(j = 0; j < a.size(); j++) {
            if(a[j] >= 65 && a[j] <= 90) a[j] = a[j]+32;
        }
        for(j = 0; j < b.size(); j++) {
            if(b[j] >= 65 && b[j] <= 90) b[j] = b[j]+32;
        }

        for(j = 0; j < a.size(); j++) araa[a[j]]++;
        for(j = 0; j < b.size(); j++) arab[b[j]]++;


        //for(j = 0; j < 123; j++) cout << araa[j]; cout << endl;
        //for(j = 0; j < 123; j++) cout << arab[j]; cout << endl;

        for(j = 96; j < 123; j++) {
            if(araa[j] != arab[j]) {
                flag = false;
                break;
            }
        }

        if(flag == true) {cout<<"Case "+to_string(i)+": Yes"<<endl; continue;}

        cout << "Case "+to_string(i)+": No" <<endl;

    }
    return 0;
}