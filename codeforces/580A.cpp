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
const int sz = 1e5+2;
int value[100000];
int dp[100000];
int n;
int longest(int u) {
    if(dp[u] != -1) return dp[u];
    int mx = 0;
    for(int v=u+1; v < n; v++) {
        if(value[v]>value[u]) {
            if(longest(v)>mx) {
                mx = longest(v);
            }
        }
    }
    dp[u] = 1+mx;
    return dp[u];
}
int main()
{
    fr;
    sf("%d", &n);
    memset(dp, -1, sizeof dp);
    for(int i = 0; i < n; i++) {
        cin>>value[i];
    }
    int mx = 0, indx = 0;
    for(int i = 0; i < n; i++) {
        if(longest(i)>mx) {
            mx = longest(i);
            indx = i;
        }
    }
    pf("%d\n", indx);
    return 0;
}