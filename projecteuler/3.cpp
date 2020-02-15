//ProjectEuler
#include <bits/stdc++.h>
#define SIZE 100000
typedef unsigned long long ll;
using namespace std;
ll N = 600851475143;

int prime[SIZE];
void sieve()
{
    ll i, j;
    for(i = 2; i < SIZE; i++) {
        prime[i] = 1;
    }
    ll root = sqrt(SIZE)+1;
    for(i = 2; i <= root; i++) {
        if(prime[i] == 1) {
            for(j = 2; i*j <SIZE; j++) prime[i*j] = 0;
        }
    }
    /* cin >> check;
    cout << prime(check) << endl;
    */
}

bool isPrime(int x) {
    if(x < 2) return 0;
    return prime[x];
}

int main()
{
    sieve();
    int max = 1;
    ll root = sqrt(N)+1;
    /* if(N%2 == 0) {
        max = 2;
        N = (N/2);
    } */
    /* int check;
    isPrime();
    cin >> check;
    cout << isPrime(check) << endl;
    cin >> check; */
    bool flag = true;
    for(int i = 3; i <=N; i+=2) {
        /* cout << "i = "<<i << endl;
        flag = true;
        if(N%i == 0) {
            for(int j = 2; j < i; j++) {
                if(i%j == 0) {
                    flag = false;
                    break;
                }
            }
            cout << i << endl; */
            if(N%i == 0 && isPrime(i)) {
                while(N%i == 0) {
                    N = (N/i);
                }
            }
            max = i;
            cout <<"max = " << max << endl;
        }
    //}
    cout << max << endl;

    return 0;
}