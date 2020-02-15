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

map<int, int> shasha;
map<int, int> dima;

int main()
{
    
    ll n, n2, i, num;
    cin>>n;
    n2 = 2*n;
    for(i = 1; i <= n2; i++) {
        cin>>num;
        if(!shasha.count(num)) shasha[num] = i;
        else dima[num] = i; 
    }

    ll ans1 = 0;
    int value, index = 0;
    for(auto &it : shasha) {
        if(it.first == 1) {
            value = it.second;
            ans1 += value - 1;
            index = it.second;
        }
        else {
            value = it.second;
            ans1 += abs(value - index);
            index = it.second;
        }
    }
    index = 0;
    for(auto &it : dima) {
        if(it.first == 1) {
            value = it.second;
            ans1 += value - 1;
            index = it.second;
        }
        else {
            value = it.second;
            ans1 += abs(value - index);
            index = it.second;
        }
    }
    cout<<ans1<<endl;
    return 0;
}