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
    int n, m;
    cin>>n>>m;
    int ara[n+2][m+2];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin>>ara[i][j];
        }
    }
    bool flag = false;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int temp = ara[i][j];
            if(ara[i][j] == 1024) continue;
            for(int k = i+1; k < n; k++) {
                for(int l = j; l< m; l++) {
                    if(temp == ara[k][l]) ara[k][l] = 1024;
                    if(ara[k][l] == 1024) continue;
                    if(temp^ara[k][l]) {
                        if(flag == false) {cout<<"TAK"<<endl; flag = true;};
                        cout<<i+1<<" "<<l+1<<endl;
                    }
                }
            }
        }
    }
    if(flag == false) cout<<"NIE"<<endl;
    return 0;
}