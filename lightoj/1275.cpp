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

ll solve(int t, int n, int c) {
    return t*(c-t*n);
}

int main()
{
    //fr; fw;
    int tc, q = 0;
    cin>>tc;
    while(tc--) {
        int n, c;
        cin>>n>>c;
        cout<<"Case "<<++q<<": ";
        if(n == 0 || c == 0) {cout<<"0"<<endl; continue;}
        int t1 = c/(2*n);
        int t2 = t1+1;
        
        if(solve(t1, n, c)>=solve(t2, n, c)) cout<<t1<<endl;
        else cout<<t2<<endl;
    }
    return 0;
}