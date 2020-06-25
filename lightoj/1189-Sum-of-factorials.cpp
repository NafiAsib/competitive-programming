#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr <<"\e[91m"<<__func__<<": "<< #x << " = " << x <<"\e[39m"<< "\n"
typedef pair<int, int> pii;
typedef long long int64;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;
long long fact[21];
vector < int > ans;
bool got;
// int dp[21];
// int solve(long long rest, int at) {
//     // watch(at);
//     // watch(rest   );
    
//     if(at == 20) {
//         if(rest != 0) return 0;
//         else {
//             got = true;
//             int sz = (int)ans.size();
//             for(int i = 0; i<sz; i++) {
//                 // cout << ans[i] << "!";
//                 printf("%d!", ans[i]);
//                 if(i != sz-1) 
//                     printf("+");
//                     // cout << "+";
//             }
//             cout << "\n";
//             return;
//         }
//     }
//     if(dp[i] != -1) {

//         if( !got && rest - fact[at] >= 0) {
//             ans.push_back(at);
//             dp[at] = solve(rest-fact[at], at+1);
//             ans.pop_back();
//         }
//         if(!got) solve(rest, at+1);
//     }

//     else return dp[i];

// }

void solve(long long rest, int at)
{
    // watch(at);
    if(rest == 0)
    {
        int sz = (int)ans.size();
        sort(ans.begin(), ans.end());
        for(int i = 0; i<sz; i++) {
            printf("%d!", ans[i]);
            if(i != sz-1) 
                printf("+");
        }
        cout << "\n";
        got = true;
        return;
    }
    if(at < 0) return;

    else if(!got && rest - fact[at] >= 0) {
        ans.push_back(at);
        solve(rest-fact[at], at-1);
    }
    else if(!got) solve (rest, at-1);
}


int main()
{
#ifndef ONLINE_JUDGE
    // freopen("../io/in.txt", "r", stdin);
    // freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    
    fact[0] = 1, fact[1] = 1LL, fact[2] = 2LL;
    for(long long i=3LL; i<=20; i++) {
        fact[i] = fact[i-1] * i;
    }
    int tc;
    scanf("%d", &tc);
    // tc = 1;
    for(int q=1; q<=tc; q++) {
        // for(int i=0; i<=20; i++) dp[i] = -1;
        long long l;
        // cin >> l;
        scanf("%lld", &l);
        //l = 9;
        got = false;
        // cout << "Case " << q << ": ";
        printf("Case %d: ", q);
        ans.clear();
        solve(l, 20);
        if(got == false) 
            printf("impossible\n");
            // cout <<"impossible\n";
    }
    return 0;
}
