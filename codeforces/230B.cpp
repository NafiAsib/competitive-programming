#include <bits/stdc++.h>
#define endl "\n"
#define SIZE 1000002
typedef long long ll;
using namespace std;

int prime[SIZE];

void sieve()
{
    int i, j;
    int root = sqrt(SIZE);

    for(i = 2; i < SIZE; i++) prime[i] = 1;
    for(i = 2; i < root; i++) {
        if(prime[i] == 1) {
            for(j = 2; i*j < SIZE; j++) {
                prime[i*j] = 0;
            }
        }
    }
}

int isPrime(int n)
{
    if(n < 2) return 0;
    //cout<<prime[n]<<endl;
    return prime[n];
}

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    sieve();

    int n, t;
    ll num, check;

    cin>>t;

    while(t--) {
        cin>>num;
        n = (int)sqrt(num);
        check = (ll)n*n;
        //cout<<n<<endl<<check<<endl;
        if(isPrime(n) == 1 && check == num) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}