#include <bits/stdc++.h>
using namespace std;

bool primes[100000000];

void sieve() {
    int i, j, root, countroot = 0;;
    for(i = 2; i < 100000000; i++) primes[i] = 1;
    root = sqrt(100000000)+1;
    cout << "Starting" << endl;
    for(i = 2; i < root; i++) {
        if(primes[i] == 1) {
            for(j = 2; i*j < 100000000; j++) primes[i*j] = 0;
        }
        /* if(countroot == 10001) {
            cout << i << endl;
            return;
        } */
    }
    cout <<"Counted = " <<countroot<<endl;
    cout <<"END" << endl;
}

int main() 
{
    sieve();
    unsigned long long sum = 0, i , j, cnt = 0;
    freopen("out.txt", "w", stdout);
    for(i = 2; i < 2000000; i++) {
        if(primes[i] == 1) {
            sum += i;
            cnt++;
        }
        if(cnt == 2000000) {
            cout << "Breaking" << endl;
            break;
        }
    }

    cout << sum << endl;
    return 0;
}