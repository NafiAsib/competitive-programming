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
/* bool cmp(pair<int, int> A, pair<int, int> B) {
    if(A.second > B.second) return true;
    return false;
} */
int main()
{
    //fr;
    int n, num;
    sf("%d", &n);
    map<int, int>mp;
    for(int i = 1; i <= n; i++) {
        cin>>num;
        mp[num] = i;
    }
    
    for(auto &i : mp) cout<<i.second<<" ";
    cout<<endl;
    return 0;
}