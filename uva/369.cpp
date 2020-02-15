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

int main()
{
    //fr; fw;
    ll ncr[102][102];
    ncr[0][0] = 1;
    int i, j;
    for(i = 1; i <= 100; i++) {
        for(j = 0; j <= 100; j++) {
            if(j > i) ncr[i][j] = 0;
            else if(j == i || j == 0) ncr[i][j] = 1;
            else ncr[i][j] = ncr[i-1][j-1] + ncr[i-1][j];
        }
    }
    int n, r;
    while(1) {
        cin>>n>>r;
        if(n == 0 and r == 0) break;
        else cout<<n<<" things taken "<<r<<" at a time is "<<ncr[n][r]<<" exactly."<<endl;
    }
    return 0;
}