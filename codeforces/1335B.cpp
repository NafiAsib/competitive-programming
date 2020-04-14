#include <bits/stdc++.h>
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
using namespace std;

int main()
{
    // freopen("../io/in.txt", "r", stdin);
    int tc;
    cin >> tc;
    while(tc--) {
        int n, a, b;
        cin >> n >> a >> b;


        char cur = 97;
        int gone = 0;
        for(int i=1; i<=n; i++) {
            if(cur - 96 > b) cur = 97;
            if(gone == a) {
                gone = 0;
                cur = 97;
                // watch(i);
            }
            cout<<cur;
            cur++;
            gone++;
        }
        cout<<"\n";
    }
    return 0;
}