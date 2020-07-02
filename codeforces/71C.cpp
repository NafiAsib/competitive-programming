#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr <<"\e[91m"<<__func__<<": "<< #x << " = " << x <<"\e[39m"<< "\n"
typedef pair<int, int> pii;
typedef long long ll;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;

const int maxn = 1e5+2;
int a[maxn];

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../io/in.txt", "r", stdin);
    //freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    int root = sqrt(n)+1;
    vector< int > div;
    
    for(int i=1; i<=root; i++) {
        if(n%i == 0) {
            if(n/i != i) {
                div.push_back(i);
                div.push_back(n/i);
            }
            else div.push_back(i);
        }
    }
    sort(div.begin(), div.end());

    for(int i=0; i<n; i++) {
        if(a[i] == 0) continue;

        
        for(auto divisor:div) {
            bool found = true;
            if(n/divisor < 3) continue;
            int aa = n/divisor;

            for(int k=0; k<aa; k++) {
                int b = (i+(divisor*k))%n;
                if(a[b] == 0) {
                    found = false;
                    break;
                }
            }

            if(found) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}
