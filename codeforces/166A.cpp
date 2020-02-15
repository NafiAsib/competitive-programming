#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define endl "\n"
#define off ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fr freopen("in.txt", "r", stdin)
#define fw freopen("out.txt", "w", stdout)
#define pb push_back
#define eb emplace_back
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
#define pass printf("Passed Here\n")

typedef long long ll;
typedef unsigned int ui;
typedef pair<int, int> PII;

bool cmp(pair< pair<int, int> , int> a, pair< pair<int, int> , int> b) {
    if(a.first.first > b.first.first) return true;
    else if(a.first.first == b.first.first and a.first.second < b.first.second) return true;
    return false;
}

int main()
{
    //fr;
    map <PII, int> mp;
    int n, k;
    cin>>n>>k;
    int x, y;
    for(int i = 0; i < n; i++) {
        cin>>x>>y;
        mp[{x, y}] += 1;
    }
    /*for(auto &i:mp) {
        cout<<i.first.first<<" "<<i.first.second<<" "<<i.second<<endl;
    }*/
    vector<pair <PII, int>> v;
    for(auto &i:mp){
        v.push_back(pair <PII, int>(i.first, i.second));
    }
    /* for(auto &i: v) {
            cout<<i.first.first<<" "<<i.first.second<<" "<<i.second<<endl;
        }
    cout<<"After sort"<<endl; */
    sort(v.begin(), v.end(), cmp);

    /* for(auto &i: v) {
        cout<<i.first.first<<" "<<i.first.second<<" "<<i.second<<endl;
    } */
    //watch(k);
    int pos = 0;
    for(auto i:v) {
        pos += i.second;
        //watch(pos);
        if(pos>=k) {cout<<i.second<<endl; return 0;}
    }
    return 0;
}