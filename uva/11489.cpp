#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
typedef pair<int, int> pii;
typedef long long int64;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;
const long long linf = 0x3f3f3f3f3f3f3f3fLL;

int main()
{
#ifndef ONLINE_JUDGE
//    freopen("../io/in.txt", "r", stdin);
//    freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int tc;
    cin >> tc;
    for(int q=1; q<=tc; q++) {
        string s;
        cin >> s;
        int a[1005];
        int sum=0;
        int i;
        int multiple = 0;
        for(i=0; i<(int)s.size(); i++) {
            a[i] = s[i]-48;
            sum += a[i];
            if(a[i]%3 == 0) multiple++;
        }
        int sz = (int)s.size();
        if(sz == 1) {
            cout << "Case "<< q << ": S\n"; 
            continue;
        }
        if(sum%3== 0) {
            if(multiple == 0) cout << "Case "<< q << ": T\n"; 
            else if(multiple&1) cout << "Case "<< q << ": S\n"; 
            else cout << "Case "<< q << ": T\n"; 
        }
        else {
            bool firstmove = false;
            for(i=0; i<sz; i++) {
                if((sum-a[i])%3 == 0) {
                    firstmove = true;
                    break;
                }
            }
            if(firstmove) {
                if(multiple == 0) cout << "Case "<< q << ": S\n"; 
                else if(multiple&1) cout << "Case "<< q << ": T\n"; 
                else cout << "Case "<< q << ": S\n"; 
            }
            else cout << "Case "<< q << ": T\n"; 
        }
    }

    return 0;
}

