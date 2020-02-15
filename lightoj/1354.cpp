/*-------------- Bismillahir Rahmanir Rahmin --------------*/
//
#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define endl "\n"
#define off() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fr freopen("in.txt", "r", stdin)
#define fw freopen("out.txt", "w", stdout)
#define pb push_back
#define eb emplace_back
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl

typedef long long ll;
typedef unsigned int ui;
//Variables
//const double pi = 2*acos(0.0);

int main()
{
    //fr; fw;
    int i, j, tc, k = 0;
    int one, two, three, four, o1, t2, t3, f4;
    char dec[50], bin[50];
    char dot;
    sf("%d", &tc);
    while(tc--) {
        cin>>one>>dot;
        cin>>two>>dot;
        cin>>three>>dot;
        cin>>four;
        cin>>bin;
        o1 = 0, t2 = 0, t3 = 0, f4 = 0;
        j = 0;
        while(bin[j] != '.') {
            o1 = (o1*2)+(bin[j] - 48);
            j++;
        }
        j++;
        while(bin[j] != '.') {
            t2 = (t2*2)+(bin[j] - 48);
            j++;
        }
        j++;
        while(bin[j] != '.') {
            t3 = (t3*2)+(bin[j] - 48);
            j++;
        }
        j++;
        while(bin[j] != '\0') {
            f4 = (f4*2)+(bin[j] - 48);
            j++;
        }
        if(one == o1 && two == t2 && three == t3 && four == f4) pf("Case %d: Yes\n", ++k);
        else pf("Case %d: No\n", ++k);
    }

    return 0;
}