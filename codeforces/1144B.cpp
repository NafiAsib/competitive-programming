/*-------------- Bismillahir Rahmanir Rahmin --------------*/
//By parity cf meant even odd, dumbass
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
#define PII pair<int, int>;
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl

typedef long long ll;
typedef unsigned int ui;

int main()
{
    off();
    //fr;
    vector< int > even, odd;
    int n, k, num, sum = 0; cin>>n;
    for(int i = 0; i < n; i++) {
        cin>>num;
        sum += num;
        if(num&1) odd.pb(num);
        else even.pb(num);
    }
    int sz = min(odd.size(), even.size());
    sort(odd.rbegin(), odd.rend());
    sort(even.rbegin(), even.rend());
    sum -= accumulate(odd.begin(), odd.begin()+sz, 0);
    sum -= accumulate(even.begin(), even.begin()+sz, 0);
    if((int)even.size() > sz)
        sum -= even[sz];
    else if((int)odd.size() > sz) 
        sum -= odd[sz];
    cout<<sum<<endl;
    return 0;
}