#include <bits/stdc++.h>
#define MX 2000
using namespace std;

int main()
{
    int i, j, val, n;
    vector< int > v;
    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> j;
        v.push_back(j);
    }

    unsigned long long min_result = 0;
    for(i = 0; i < n; i++) min_result += v[i];
    sort(v.begin(), v.end());
    int max_divisor = 0;

    for(i = n-1; i--; i >= (n/2)) {
        if(v[i]%2 == 0 && v[i] != 0) {
            int divisor[MX];
            int root = sqrt(v[i])+1;
            int k = 0;
            for(j = 2; j <+ root; j++) {
                if(v[i]%j == 0) {
                    divisor[k] = j;
                    k += 1;
                    divisor[k] = v[i]/j;
                    k += 1;
                }
            }
            sort(divisor, divisor+k);
            if(max_divisor > divisor[k-1]) continue;
            max_divisor = divisor[k-1];
            v[i] = v[i]/max_divisor;
            v[0] = v[0]*max_divisor;
           
            unsigned long long result = 0;
            for(i = 0; i < n; i++) result += v[i];
            //break;
            if(result < min_result) min_result = result; 
            
            v[i] = v[i]*max_divisor;
            v[0] = v[0]/max_divisor;
            
            //for(int x = 0; x < k; x++) divisor[x] = 0;
            //break;
        }
    }
    cout << min_result << endl;

    return 0;
}