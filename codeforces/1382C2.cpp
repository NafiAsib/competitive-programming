#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string a, b; cin >> a >> b;
        if(a == b) {
            cout << "0\n";
            continue;
        }
        vector<int> x, y;
        char last = a[0];
        int cnt = 0;

        for(int i=0; i<(int)a.size(); i++) {
            if(a[i] != last) {
                x.push_back(i);
                last = a[i];
                cnt++;
            }
        }
        if(last != '0') {
            cnt++;
            x.push_back(n);
        }
        last = b[0];
        for(int i=0; i<(int)b.size(); i++) {
            if(b[i] != last) {
                y.push_back(i);
                last = b[i];
                cnt++;
            }
        }
        if(last != '0') {
            cnt++;
            y.push_back(n);
        }
        reverse(y.begin(), y.end());

        cout << cnt << " ";
        for(auto i:x) cout << i << " ";
        for(auto i:y) cout << i << " ";
        cout << "\n";

    }

    return 0;
}