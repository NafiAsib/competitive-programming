
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
#define PII pair<int, int>
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
#define pass printf("Passed Here\n")

typedef long long ll;
typedef unsigned int ui;
int mod = 1000000007;

int main()
{
    string s;
    cin>>s;
    int len = s.size();
    int ara[124];
    memset(ara, 0, sizeof ara);
    for(int i = 0; i<len; i++) {
        ara[s[i]] += 1;
    }
    bool odd = false, dodd = false;
    for(int i = 90; i < 123; i++) {
        if(ara[i]&1 && odd == true) {
            dodd = true;
            break;
        }
        else if(ara[i]&1 && odd == false) odd = true;
    }
    /*for(int i = 90; i<123; i++) cout<<i<<" "<<ara[i]<<endl;*/
    if(dodd == true) {
        if(len&1) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    else if(dodd == false) {
        cout<<"First"<<endl;
    }
    return 0;
}