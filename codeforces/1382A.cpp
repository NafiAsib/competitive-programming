#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        int a[n+1], b[m+1];

        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<m; i++) cin >> b[i];
        bool flag = false;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(a[i] == b[j]) {
                    cout<< "YES" << "\n";
                    cout << "1 "<< a[i] << "\n";
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }

        if(!flag) cout << "NO" <<"\n";

    }

    return 0;
}