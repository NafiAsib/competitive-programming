#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define endl "\n"
#define dbg(c) printf("in %d\n", c);
#define off ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
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
    off;
    //fr;
    int n, k;
    cin>>n>>k;
    int temp = n*k;
    int a[temp+2];
    for(int i = 1; i <= temp; i++) a[i] = i;
    int b[k+2];
    bool mark[temp+2];
    memset(mark, false, sizeof mark);
    for(int i = 1; i <= k; i++) {
        cin>>b[i];
        mark[b[i]] = true;
    }
    for(int i = 1; i <= k; i++) {
        cout<<b[i]<<" ";
        int k = 1;
        for(int j = 1; j <=n-1; j++){
            while(mark[k] == true) k++;
            cout<<a[k]<<" ";
            mark[k] = true;
        }
        cout<<endl;
    }
    return 0;
}