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
bool cmp(PII a, PII b) {
    if(a.first < b.first) return true;
    return false;
}
int main()
{
    //fr;
    int s, n, n1, n2;
    bool flag = true;
    sf("%d %d", &s, &n);
    vector< PII >v;
    for(int i = 0; i < n; i++) {
        cin>>n1>>n2;
        v.push_back(PII(n1, n2));
    }
    sort(v.begin(), v.end(), cmp);
    //for(auto& i: v) cout<<i.first<<" "<<i.second<<endl;
    for(auto& i : v) {
        if(s > i.first) {
            s += i.second;
        }
        else {
            flag = false;
        }
    }
    if(flag == false) pf("NO\n");
    else pf("YES\n");
    return 0;
}