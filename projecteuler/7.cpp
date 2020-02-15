#include <bits/stdc++.h>
using namespace std;

bool primes[100000000];

void sieve() {
    int i, j, root, countroot = 0;;
    for(i = 2; i < 1000000; i++) primes[i] = 1;
    root = sqrt(1000000)+1;
    cout << "Starting" << endl;
    for(i = 2; i < root; i++) {
        if(primes[i] == 1) {
            for(j = 2; i*j < 1000000; j++) primes[i*j] = 0;
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
    int countroot = 0, i, j;
    for(i = 2; i < 100000000; i++) {
        if(primes[i]== 1) countroot++;
        if(countroot == 10001) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
