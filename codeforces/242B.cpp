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
    int n;
    cin>>n;
    int ara[n+2][2];
    int minx = INT_MAX, maxy = INT_MIN, x, y;
    for(int i = 0; i<n; i++) {
        cin>>ara[i][0]>>ara[i][1];
        minx = min(minx, ara[i][0]);
        maxy = max(maxy, ara[i][1]);
    }
    for(int i = 0; i<n; i++) {
        if(ara[i][0] == minx && ara[i][1] == maxy) {
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}