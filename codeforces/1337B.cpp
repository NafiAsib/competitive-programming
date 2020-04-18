#include <bits/stdc++.h>
#define watch(x) cerr <<"at line "<< __LINE__ <<", " << #x << " = " << x << "\n"
using namespace std;

int main()
{
    // freopen("../io/in.txt", "r", stdin);
    int tc;
    cin >> tc;
    while(tc--) {
        int x, n, m;
        cin >> x >> n >> m;
        bool flag = false;

        while(x > 0) {
            if(n <= 0 and m <= 0) {
                flag = true;
                cout << "NO" << endl;
                break;
            }

            if(x > 20) {
                if(n > 0) {
                    x = x/2+10;
                    n--;
                }
                else if(m>0) {
                    x -= 10;
                    m--;
                }
            }
            
            else if( x <= 20) {
                if(m == 0) {
                    flag = true;
                    cout << "NO" << endl;
                    break;
                }
                else {
                    x -= 10;
                    m--;
                }
            }
        }
        // watch(x);
        if(!flag) cout<<"YES"<<endl;
    }
    return 0;
}