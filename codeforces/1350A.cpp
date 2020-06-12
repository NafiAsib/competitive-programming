#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
typedef pair<int, int> pii;
typedef long long int64;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;
const long long linf = 0x3f3f3f3f3f3f3f3fLL;

const int psz = 1e6+2;
int prime[psz];
int sz = 1e6;
void seive() 
{
    prime[2] = prime[3] = 0;
    int root = sqrt(sz);
    for(int i=2; i<=root; i++) {
        if(prime[i] == 0) {
            for(int j=2; i*j<=sz; j++) prime[i*j] = 1;
        }
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
	    freopen("../io/in.txt", "r", stdin);
	    //freopen("../io/out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    seive();
    int tc;
    cin >> tc;
    while(tc--) {
        int64 n, k;
        cin >> n >> k;
        while(1) {
//            watch(n);
            if(n%2 == 0) {
               n += (2*k);
               break;
            }
            else if(prime[n] == 0) {
//                cout<<"here\n";
                n += n;
                k--;
                n += (2*k);
                break;
            }
            else {
//                cout<<"here\n";
                int64 root = sqrt(n);
//               watch(root);
                for(int i=2; i<=root; i++) {
                    if(n%i == 0) {
                        n += i;
//                        watch(n);
                        k--;
                        break;
                    }
                }
            }
        }
        
        cout << n << "\n";
    }
    return 0;
}

