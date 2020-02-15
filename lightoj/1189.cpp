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
#define dbg(c) printf("in %d\n", c)
#define pass printf("Passed Here\n")

typedef long long ll;
typedef unsigned int ui;

int josephus(int n, int k) {
    if(n == 1) return 1;
    return (josephus(n-1, k) + k-1)%n+1;
}

int main()
{
    //fr; fw;
    int tc, q = 0;
    cin>>tc;
    while(tc--) {
        int n, k;
        cin>>n>>k;
        cout<<"Case "<<++q<<": "<<josephus(n, k)<<endl;
    }
    return 0;
}