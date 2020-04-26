#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr << #x << " = " << x << "\n"
typedef pair<int, int> pii;
typedef long long ll;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;

// int p[] = {2, 4, 8, 16, 32, 64, 128, 256};

int power(int num) 
{
    int n = 1;
    for(int i=1; i<=num; i++) n *= 2;

    return n;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../io/in.txt", "r", stdin);
    //freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int n, a, b, temp;
    cin >> n >> a >> b;

    temp = max(a, b);
    a = min(a, b);
    b = temp;

    int ara[n+1];

    for(int i=1; i<=n; i++) ara[i] = i;
    int round = 0, sz = n, k;
    bool got = false;
    int next;

    while(1) {
        k = 1;
        round++;
        for(int i=1; i<=sz; i+=2) {
            int first = ara[i];
            int second = ara[i+1];
            if(first == a && second == b) {
                got = 1;
                break;
            }
            if(first == a || second == a) next = a;
            else if(first == b || second == b) next = b;
            else next = first;
            ara[k++] = next;
        }
        if(got) break;
        sz = k-1;
    }
    if(power(round) == n) cout << "Final!\n";
    else cout << round << "\n";

    // cout << ((power(round) == n)? "Final!":round) << "\n";
    
    return 0;
}
