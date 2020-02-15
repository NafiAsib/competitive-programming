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
    int n, k;
    sf("%d %d", &n, &k);
    int ara[n+2];
    int val[n+2];
    for(int i = 0; i < n; i++) {
        sf("%d %d", &ara[i], &val[i]);
    }
    int mx = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(val[i] > k) {
            //int tmp = ara[i];
            ara[i] = ara[i] - (val[i]-k);
        }
        if(ara[i] > mx) mx = ara[i];
    }
    cout<<mx<<endl;
    return 0;
}