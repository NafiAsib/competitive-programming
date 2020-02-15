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
    //fr;
    int r, c,k;
    sf("%d %d %d", &r, &c, &k);
    int a[r+2][c+2];
    int row[r+2], col[c+2];
    for(int i = 1; i<=r; i++) row[i] = i;
    for(int i = 1; i<=c; i++) col[i] = i;

    for(int i = 1; i<=r; i++)
        for(int j = 1; j<=c; j++) 
            sf("%d", &a[i][j]);

    while(k--) {
        char ch[2]; 
        int x, y;
        sf("%s%d%d",&ch,&x, &y);
        if(ch[0] == 'g') pf("%d\n",a[row[x]][col[y]]);
        else if(ch[0] == 'c') {
            swap(col[x],col[y]);
        }
        else if(ch[0] == 'r') {
            swap(row[x], row[y]);
        }
        /* for(int i = 0; i<r; i++) {
            for(int j = 0; j<c; j++) {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        } */
        //pass;
        //pf("%c is ch\n", ch);
    }
    return 0;
}