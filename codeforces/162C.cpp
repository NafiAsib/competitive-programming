#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;

using namespace std;

const int N = 1e4+20;
bool prime[N];

void sieve() {
    for(int i = 2; i < N; i++) prime[i] = 1;
    int root = sqrt(N)+1;

    for(int i = 2; i < root; i++) {
        if(prime[i]) {
            for(int j = 2; i*j < N; j++) prime[i*j] = 0;
        }
    }
}

bool isPrime(int n) {
    if(n < 2) return 0;
    return prime[n];
}

int main()
{
    int n, i;

    sieve();

    cin>>n;

    int number = n;

    if(isPrime(n)) {
        cout<<n<<endl;
        return 0;
    }
    bool flag = 0;
    while(number%2 == 0) {
        if(flag) cout<<'*';
        cout<<"2";
        flag = 1;
        number /= 2;
    }
    for(int i = 3; i < n; i+=2) {
        while(number%i == 0) {
            if(isPrime(i)) {
                if(flag) cout<<'*';
                cout<<i;
                number /= i;
                flag = 1;
            }
        }
    }

    cout<<endl;

    return 0;
}