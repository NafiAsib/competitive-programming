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

int main()
{
    //fr;
    int n; cin>>n;
    for(int i = 0; i < n; i++) {
        string st;
        cin>>st;
        bool flag = true;
        int sz = st.size();
        if(sz == 1) {
            cout<<"Yes"<<endl; 
            continue;
        }
        sort(st.begin(), st.end());
        for(int i = 1; i < sz; i++) {
            if(st[i]-st[i-1] != 1) {
                cout<<"No"<<endl; 
                flag = false;
                break;
            }
        }
        if(flag)cout<<"Yes"<<endl;
    }
    return 0;
}