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
    //fr;
    int n, m;
    sf("%d %d", &n, &m);
    int ara[m+2];
    for(int i = 0; i < m; i++) cin>>ara[i];
    sort(ara, ara+m, greater<int>());
    //for(int i = 0; i < m; i++) cout<<ara[i]<<" ";
    //cout<<endl;
    int i, j, min = INT_MAX;
    for(i = 0, j = n-1; j < m; i++, j++) {
        if(ara[i] - ara[j] < min) min = ara[i] - ara[j];
    }
    cout<<min<<endl;
    return 0;
}