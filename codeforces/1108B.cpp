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
    int n;
    sf("%d", &n);
    int ara[n+2];
    for(int i = 0; i < n; i++) {
        cin>>ara[i];
    }
    sort(ara, ara+n);
    long long hi = ara[n-1];
    for(int i = 0; i < n; i++) {
        if(hi%ara[i] == 0) {
            if(ara[i] == ara[i+1]) i++;
            ara[i] = 0;
        }
    }
    sort(ara, ara+n);
    cout<<ara[n-1]<<" "<<hi<<endl;
    return 0;
}