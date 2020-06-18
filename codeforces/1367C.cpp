#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr << #x << " = " << x << "\n"
typedef pair<int, int> pii;
typedef long long int64;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("../io/in.txt", "r", stdin);
    //freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int tc;
    cin >> tc;
    while(tc--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        int res = 0;
        int last = -1;

        for(int i=0; i<n;) {
            //watch(i);
            if(s[i] == '1') {
                last = i;
                i++;
            }
            else if(last == -1 || (i-last)-1 == k) {
                // watch(i);
                int j = i+1;
                for(; j <= i+k && j < n && s[j] != '1'; j++);
                // watch(i+k);
                // watch(j);
                if(j == (i+k)+1 || j == n) {
                    res++;
                    if(j == n) break;
                    j--;
                    last = i;
                    i = j+1;
                }
                else i = j;
            }
            else i++;
        }

        cout << res << "\n";
    }

    return 0;
}
