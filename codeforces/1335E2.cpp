#include <bits/stdc++.h>
#define watch(x) cerr <<"at line "<< __LINE__ <<", " << #x << " = " << x << "\n"
using namespace std;

const int mx = 2e5+2;
int freq[201][mx];
vector< int > pos[201];
int a[mx];

int main()
{
    // freopen("../io/in.txt", "r", stdin);
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        for(int i=0; i<=200; i++)  pos[i].clear();

        for(int i=1; i<=n; i++) {
            cin>>a[i];
            pos[a[i]].emplace_back(i);
        }

        int ans = 0;
        //for(int i=0; i<=200; i++) freq[i][0] = 0;

        for(int i=1; i<=200; i++) {
            freq[i][0] = 0;
            for(int j=1; j<=n; j++) {
                freq[i][j] = freq[i][j-1];
                if(a[j] == i) freq[i][j]++;
                
                ans = max(ans, freq[i][j]);
            }
        }
        // watch(ans);

        for(int i=1; i<=200; i++) {
            if(pos[i].size() < 2) continue;

            for(int j = 0, k = pos[i].size()-1; pos[i][j] < pos[i][k]; j++, k--) {
                int mid = 0;
                int l = pos[i][j]+1;
                int r = pos[i][k]-1;
                if(l > r) mid = 0;
                else {
                    for(int x = 1; x<=200; x++) 
                        mid = max(mid, freq[x][r] - freq[x][l-1]);
                }

                ans = max(ans, 2*(j+1)+mid);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
            

