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
    int r, c;
    cin>>r>>c;
    char a[r+2][c+2];
    bool used[r+2][c+2];
    memset(used, false, sizeof used);
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) cin>>a[i][j];
    }

    int cnt = 0, temp = 0, r1 = 0, c1 = 0;

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(a[i][j] == 'S') {
                r1++;
                break;
            }
        }
    }
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            if(a[j][i] == 'S') {
                c1++;
                break;
            }
        }
    }
    cout<<(r*c)-(r1*c1)<<endl;
    return 0;
}