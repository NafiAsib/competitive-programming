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
    int n;
    sf("%d", &n);
    int ara[n+2];
    for(int i = 0; i < n; i++) sf("%d", &ara[i]);
    sort(ara, ara+n);
    cout<<"1 "<<ara[0]<<endl;
    if(ara[1] < 0 && ara[2] < 0) {
        cout<<"2 "<<ara[1]<<" "<<ara[2]<<endl;
        cout<<n-3<<" ";
        for(int i = 3; i < n; i++) cout<<ara[i]<<" ";
    }
    else if(ara[1]<0 && ara[2]>=0) {
        if(ara[2] == 0)
            {cout<<"1 "<<ara[3]<<endl; ara[3] = 0;}
        else {cout<<"1 "<<ara[2]<<endl; ara[2] = 0;}
        cout<<n-2<<" ";
        for(int i = 1; i < n; i++) 
            if(ara[i] != 0) 
                cout<<ara[i]<<" ";
        cout<<"0";
    }
    else if(ara[1] == 0) {
        cout<<"1 "<<ara[2]<<endl;
        cout<<n-2<<" "; cout<<ara[1]<<" ";
        for(int i = 3; i < n; i++) cout<<ara[i]<<" ";
    }
    cout<<endl;
    return 0;
}