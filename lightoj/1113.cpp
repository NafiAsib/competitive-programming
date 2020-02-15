#include <bits/stdc++.h>
using namespace std;
/*
typedef long long ll;

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
//const int size = 1e6+5;
//const double PI acos(-1)
*/

#define pf printf

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    //sync_off();

    //vector< string > v;

    string a, b;
    int i = 0, j, T, caseno = 0;
    bool check = false;
    cin >> T;


    while(T--) {
        //while(!s1.size()) s1.pop();
        //while(!s2.size()) s2.pop();
        stack< string > s1;
        stack< string > s2;
        b = "http://www.lightoj.com/";
        s1.push(b);
        caseno++;
        check = false;

        while(cin >> a) {
            //cin >> a;
            if(a[0] == 'Q') break;
            else if(a[0] == 'V') {
                cin>>b;
                s1.push(b);
                if(check == false) {pf("Case %d:\n", caseno); check = true;}
                cout << b << endl;
                while(!s2.empty()) s2.pop();
            }
            else if(a[0] == 'B') {
                if(check == false) {pf("Case %d:\n", caseno); check = true;}
                if(s1.size() == 1) {cout << "Ignored" << endl; //b = "http://www.lightoj.com/"; s1.push(b);
                }
                else {
                    s2.push(s1.top());
                    s1.pop();

                    cout<<s1.top()<<endl;
                }
            }
            else if(a[0] == 'F') {
                if(check == false) {pf("Case %d:\n", caseno); check = true;}
                if(!s2.size()) cout << "Ignored" << endl;
                else {s1.push(s2.top());
                s2.pop();

                cout<<s1.top()<<endl;}
            }
        }

    }

    return 0;
}
