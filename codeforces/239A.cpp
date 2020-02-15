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

int main()
{
    ll y, k, n, q = 1;
    cin>>y>>k>>n;
    int hi = n-y;
    int x = 0;
    bool flag = false;
    int i = 1;
    while(1) {
        q = i*k;
        //watch(q);
        if(q<=n) {
            if(q-y>0) {cout<<q-y<<" "; flag = true;}
            i++;
        }
        else break;
    }
    if(flag == false) cout<<"-1"<<endl;
    cout<<endl;
    return 0;
}