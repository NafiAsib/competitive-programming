#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, abc;

    for(i = 998; i > 1; i--) {
        for(j = 1; j < 998; j++) {
            for(k = 1; k < 998; k++) {
                if(i*i == (j*j + k*k)) {
                    if(i+j+k == 1000) {
                        cout << i <<" " <<j<<" " << k << endl;
                        abc = i*j*k; break;}
                }
            }
        }
    }

    cout << abc << endl;
    return 0;
}