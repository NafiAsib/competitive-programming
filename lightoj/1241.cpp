/*-------------- Bismillahir Rahmanir Rahmin --------------*/
//Tried two times
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
    int i, j, n, tc, truth = 2, pmx = 0, nmx = 0, num;
    bool flag;
    sf("%d", &tc);
    int k = 0;
    while(tc--) {
        sf("%d", &n);
        int cnt = 0;
        pmx = 0, nmx = 0;
        while(n--) {
            sf("%d", &num);
            if(num > truth and num > nmx) {
                if(nmx == 0) {num -= 2, flag = true;}
                nmx = num;
                num = (num-pmx);
                if(flag == true) {nmx += 2, flag = false;}
                cnt = cnt + ((num/5)+((num%5)!=0));
                pmx = nmx;
            }
        }
        pf("Case %d: %d\n", ++k, cnt);
    }

    return 0;
}