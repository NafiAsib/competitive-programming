#include <bits/stdc++.h>
#define watch(x) cerr <<"at line "<< __LINE__ <<", " << #x << " = " << x << "\n"
using namespace std;
const int maxn = 2e5+2;
char a[maxn];
int cnt[maxn][27];
int n, k;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("../io/in.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    int tc;
    cin >> tc;
    while(tc--) {
        for(int i=1; i<=n; i++) {
            for(int j=0; j<26; j++) cnt[i][j] = 0;
        }
        
        cin >> n >> k;
        for(int i=1; i<=n; i++) cin >> a[i];
        int x = 1;

        for(int i=1; i<=n; i++) {
            cnt[x][a[i]-'a']++;
            x++;
            if(x == k+1) x = 1;
        }
        int mx, indx;
        int changes = 0;

        for(int i=1; i<=k/2+1; i++) {
            if(!(k%2==0) and (k/2)+1 == i) mx = cnt[i][0];
            else mx = cnt[i][0]+cnt[k-i+1][0];
            indx = 0;

            for(int j=1; j<26; j++) {
                if(!(k%2==0) and (k/2)+1 == i) {
                    if(cnt[i][j] > mx) {
                        mx = cnt[i][j]; 
                        indx = j;
                    }
                }  
                else if(cnt[k-i+1][j]+cnt[i][j] > mx) {
                    mx = cnt[k-i+1][j]+cnt[i][j]; 
                    indx = j;
                }
            }

            if(a[i] != 'a'+indx) {
                a[i] = 'a'+indx;
                changes++;
                //if(i == 2) {char c = 'a'+indx; cout<<c<<endl;}
            }

            if(!(k%2==0) and (k/2)+1 == i) continue;

            if(a[k-i+1] != a[i]) {
                a[k-i+1] = a[i];
                changes++;
            }

        }

        x = 1;
        // for(int i=1; i<=k; i++) cout<<a[i]<<" ";
        // cout<<endl;

        for(int i=k+1; i<=n; i++) {
            if(a[i] != a[x]) changes++;
            x++;
            if(x == k+1) x = 1;
        }

        cout<<changes<<"\n";

    }

    return 0;
}