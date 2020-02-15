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
    int i, j, tc;
    sf("%d", &tc);
    int k = 0;
    while(tc--) {
        map< string, int > val;
        string s; int a, b, c, v;
        int n; sf("%d", &n);
        while(n--) {
            cin>>s>>a>>b>>c;
            v = a*b*c;
            val[s] = v;
        }
        int mx = 0, lo = 1000000; string x, y;
        for(auto &it : val) {
            if(it.second > mx) {
                mx = it.second;
                x.clear();
                x = it.first;
            }
            if(lo > it.second) {
                lo = it.second;
                y.clear();
                y = it.first;
            }
        }
        if(lo != mx) cout<<"Case "<<++k<<": "<<x<<" took chocolate from "<<y<<endl;
        else cout<<"Case "<<++k<<": no thief"<<endl;
    }

    return 0;
}