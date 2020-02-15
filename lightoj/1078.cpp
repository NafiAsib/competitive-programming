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
    int tc, q = 0;
    cin>>tc;
    while(tc--) {
        int n, a;
        cin>>n>>a;
        int r = a, dig = 1;
        if(a%n == 0) {cout<<"Case "<<++q<<": 1"<<endl; continue;}
        while(1) {
            r = (r*10+a)%n;
            dig++;
            if(r == 0) break;
        }
        cout<<"Case "<<++q<<": "<<dig<<endl;
    }
    return 0;
}