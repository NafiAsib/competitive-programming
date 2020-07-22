#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr <<"\e[91m"<<__func__<<": "<< #x << " = " << x <<"\e[39m"<< "\n"
typedef long long ll;
const int inf = 0x3f3f3f3f;

int k, n;
const int maxn = 2 * 1e5;
int a[maxn+1];
vector< pair< int, char > > vec;
const int mod = 1e9+7;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../io/in.txt", "r", stdin);
    //freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n >> k;
    bool pos = false;
    for(int i=0; i<n; i++) {
        cin >> a[i];
        if(a[i] > 0) pos = true;
        if(a[i] < 0) vec.push_back({-a[i], '-'});
        else vec.push_back({a[i], '+'});
    }

    int prod = 1;
    
    if(k == n) {
        for(int i=0; i<n; i++) {
            prod = (long long) prod * a[i] % mod;
            if(prod < 0) prod += mod;
        }
    }
    
    else if(!pos) {
        sort(a, a+n);

        if(k&1) {
            reverse(a, a+n);
            for(int i=0; i<k; i++) {
                prod = (long long) prod * a[i] % mod;
                if(prod < 0) prod += mod;
            }
        }

        else {
            for(int i=0; i<k; i++) {
                prod = (long long) prod * a[i] % mod;
                if(prod < 0) prod += mod;
            }
        }
    }

    else {
        sort(vec.begin(), vec.end()); reverse(vec.begin(), vec.end());
        int neg = 0;
        for(int i=0; i<k; i++) if(vec[i].second == '-') neg++;

        if(neg&1) {
            int x1 = -1, y1 = -1, x2 = -1, y2 = -1;

            for(int i=k-1; i>=0; i--) {
                if(vec[i].second == '-') {
                    x1 = i;
                    break;
                }
            }

            for(int i=k-1; i>=0; i--) {
                if(vec[i].second == '+') {
                    x2 = i;
                    break;
                }
            }

            for(int i=k; i<n; i++) {
                if(vec[i].second == '+') {
                    y1 = i;
                    break;
                }
            }

            for(int i=k; i<n; i++) {
                if(vec[i].second == '-') {
                    y2 = i;
                    break;
                }
            }
            if(x1 == -1 || y1 == -1) swap(vec[x2], vec[y2]);
            else if(x2 == -1 || y2 == -1) swap(vec[x1], vec[y1]);
            else {
                long long t1 = vec[x2].first * vec[y1].first;
                long long t2 = vec[x1].first * vec[y2].first;

                if(t1 >= t2) swap(vec[x1], vec[y1]);
                else swap(vec[x2], vec[y2]);
            }
        }

        for(int i=0; i<k; i++) prod = (long long) prod * vec[i].first % mod;
    }

    cout << prod << "\n";

    return 0;
}
