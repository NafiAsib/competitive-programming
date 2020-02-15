//Great problem on Binary to decimal ralation
#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/blog/entry/16712

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    vector < int > v;
    long long T, n, i, j, decimal;

    cin >> T;
    for(i = 1; i <= T; i++) {
        cin >> n;
        v.clear();
        decimal = 0;
        while(n >= 2) {
            v.push_back(n%2);
            n /= 2;
        }
        v.push_back(n);
        v.push_back(0);

        reverse(v.begin(), v.end());
        next_permutation(v.begin(), v.end());
        for(j = 0; j < v.size(); j++) decimal = (decimal*2)+v[j];
        printf("Case %lld: %lld\n", i, decimal);
    }

    return 0;
}




//Brute force(TLE) Time complexity was huge that even I couldn't compute
/*typedef long long ll;
typedef unsigned int UI;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE

    long long T, n, i, j, countt = 0, cnt = 0;

    scanf("%u", &T);

    for(j = 1; j <= T; j++) {
        scanf("%u", &n);
        for(i = 0; i < 32; i++) {
            if(n & (1 << i)) countt++;
        }

        while(1) {
            cnt = 0;
            if(countt == 1) n = n*2;
            else n++;
            for(i = 0; i < 32; i++) {
                if(n & (1 << i)) cnt++;
            }
            if(cnt == countt) break;
        }

        printf("Case %u: %u\n", j, n);

        countt = 0; cnt = 0;
    }

    return 0;
}*/

