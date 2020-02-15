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
int mod = 1000000007;

int main()
{
    int tc;
    cin>>tc;
    while(tc--) {
        ll n, m;
        cin>>n>>m;
        if(n == m) cout<<"Ari"<<endl;
        else if(m%n == 0) cout<<"Ari"<<endl;
        else {
            ll res = __gcd(n,m);
            if(res%2 == 1) 
            {
                if(n>m) cout<<"Ari"<<endl;
                else cout<<"Rich"<<endl;
            }
            else {
                if(n<m) cout<<"Ari"<<endl;
                else cout<<"Rich"<<endl;
            }
        }
        /*if(n == m) cout<<"Ari"<<endl;
        else if(m%n == 0) cout<<"Ari"<<endl;
        else if(n%2 == 0 && m%2==0) {
            if(n>m) cout<<"Rich"<<endl;
            else cout<<"Ari"<<endl;
        }
        else if(n&1 && m&1) {
            if(n>m) cout<<"Ari"<<endl;
            else cout<<"Rich"<<endl;
        }
        else {
            if(n>m) cout<<"Rich"<<endl;
            else cout<<"Ari"<<endl;
        }*/
    }
    return 0;
}