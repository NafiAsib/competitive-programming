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
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
#define iPass printf("Passed this step\n")

typedef long long ll;
typedef unsigned int ui;
typedef pair<int, int> pii;
int mod = 1000000007; //10^9+7
const double eps = 1e-9;
//const double pi = 2*acos(0.0);
//int fx[]={+1,-1,+0,+0};
//int fy[]={+0,+0,+1,-1};
//int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
//int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};

int n;
int cnt = 1;
bool flag;
vector< int > v;
bool taken[20];

bool prime[200];

void sieve() {
    memset(prime, 1, sizeof prime);
    prime[0] = prime[1] = 0;
    for(int i = 2; i<200; i++) {
        if(prime[i]) {
            for(int j = 2; i*j <= 200; j++) prime[i*j] = 0;
        }
    }
}

void permute() {
    if((int)v.size() == n) {
        if(flag == false) {
            flag = true;
            if(cnt != 1) cout<<endl;
            pf("Case %d:\n", cnt); cnt++;
        }
        /* for(int i = 0; i < n-1; i++) {
            if(!prime[v[i]+v[i+1]]) {
                return;
            }
        } */
        if(!prime[v[0]+v[n-1]]) return;
        for(int i = 0; i < n-1; i++) cout<<v[i]<<" ";
        cout<<v[n-1];
        cout<<endl;
        return;
    }

    for(int curr = 2; curr <= n; curr++) {
        if(!taken[curr] && prime[v.back()+curr]) {
            taken[curr] = 1;
            v.push_back(curr);
            permute();
            v.pop_back();
            taken[curr] = 0;
        }
        
    }

}

int main()
{
    //fr; fw;
    sieve();
    while(cin>>n) {
        flag = false;
        memset(taken, false, sizeof taken);
        v.pb(1);
        permute();
        v.clear();
    }  
    return 0;
}