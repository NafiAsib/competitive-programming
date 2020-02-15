#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define endl "\n"
#define off ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fr freopen("in.txt", "r", stdin)
#define fw freopen("out.txt", "w", stdout)
#define pb push_back
#define eb emplace_back
#define PII pair<int, int>
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
#define pass printf("Passed Here\n")

typedef long long ll;
typedef unsigned int ui;

int main()
{
    //fr; fw;
    int tc, q = 0, n, ans;
    string s;
    cin>>tc;
    while(tc--) {
        cin>>n>>s;
        if(n == 1) ans = 2;
        else {
            if(s[0] == 'A') {
                if(n%3 == 1) ans = 2;
                else ans = 1;
            }
            else {
                if(n%3 == 0) ans = 1;
                else ans = 2;
            }
        }
        cout<<"Case "<<++q<<": ";
        if(ans == 1) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }  
    return 0;
}