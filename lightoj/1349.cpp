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
    int n, m, q, u, v, w, tc, z = 0;
    cin>>tc;
    while(tc--) {
        cin>>n>>m>>q;
        int a[q+2][4];
        for(int i = 0; i < q; i++) {
            cin>>u>>v>>w;
            a[i][0] = u-1;
            a[i][1] = v-1;
            a[i][2] = w;
            
        }
        ll sum = 0, ans = INT_MAX, ax, ay;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                for(int x = 0; x < q; x++) {
                    sum += (abs(i-a[x][0])+abs(j-a[x][1]))*a[x][2];
                }
                if(sum<ans) {
                    ans = sum;
                    ax = i;
                    ay = j;
                    watch(i);
                    watch(j);
                }
                sum = 0;
            }
        }
        cout<<"Case "<<++z<<": "<<ax+1<<" "<<ay+1<<endl;
    }   
    return 0;
}