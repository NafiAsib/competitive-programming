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
#define isPass printf("Passed This step\n")

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
const int sz = 1000000;
int primes[sz];
int no_primes[sz];

int isDigSum(int n) {
    if(primes[n] != 1) return 0;
    int sum = 0;
    while(n > 0) {
        sum += n%10;
        n /= 10;
    }
    if (primes[sum] == 1)
        return 1;
    else 
        return 0;
}

void sieve() {
    for(int i = 2; i < sz; i++)
        primes[i] = 1;
    int root = sqrt(sz)+1;
    for(int i = 2; i < root; i++) {
        if(primes[i] == 1) {
            for(int j = 2; i*j < sz; j++) 
                primes[i*j] = 0;
        }
    }
    int cnt = 0;
    for(int i = 1; i <= sz; i++) {
        if(primes[i] == 1) {
            if (isDigSum(i) == 1) cnt++;
            no_primes[i] = cnt;
        }
        else no_primes[i] = cnt;
    }
}

int main()
{
    //fr; fw;
    sieve();
    int n;
    sf("%d", &n);
    while(n--) {
        int t1, t2;
        sf("%d %d", &t1, &t2);
        //watch(no_primes[t1]);
        //watch(no_primes[t2]);
        int ans = no_primes[t2]-no_primes[t1]+isDigSum(t1);
        pf("%d\n", ans);
    }
    return 0;
}