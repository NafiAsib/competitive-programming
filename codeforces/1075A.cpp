#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define endl "\n"
#define dbg(c) printf("in %d\n", c);
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
    //fr;
    ll n, x, y;
    cin>>n>>x>>y;
    ll black = abs(x-n)+abs(y-n);
    ll white = abs(x-1)+abs(y-1);
    if(white>black) cout<<"Black"<<endl;
    else if (white == black) cout<<"White"<<endl;
    else cout<<"White"<<endl;
    return 0;
}