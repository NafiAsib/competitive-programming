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
    int n;
    cin>>n;
    int ara[n+2];
    for(int i = 0; i < n; i++) cin>>ara[i];
    int ans = 0, dis = 0;
    for(int i = 1; i < n; i++) {
        if(ara[0] != ara[i]) dis = max(dis, i);
    }
    for(int j = n-2; j>=0; j--){
        if(ara[n-1] != ara[j]) ans = n-1-j, dis = max(dis, ans);
    }
    cout<<dis<<endl;   
    return 0;
}