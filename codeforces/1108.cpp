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
#define PII pair<int, int>
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl

typedef long long ll;
typedef unsigned int ui;
//Variables
//const double pi = 2*acos(0.0);

int main()
{
    //fr;
    int q = 0, tc;
    sf("%d", &tc);
    while(tc--) {
        int l1, r1, l2, r2;
        sf("%d %d %d %d", &l1, &r1, &l2, &r2);
        if(l1 != l2) pf("%d %d\n", l1, l2);
        else if(l1 != r2) pf("%d %d\n", l1, r2);
    }

    return 0;
}