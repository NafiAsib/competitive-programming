#include <bits/stdc++.h>
#define watch(x) cerr <<"at line "<< __LINE__ <<", " << #x << " = " << x << "\n"
using namespace std;

long long ans;

long long square(int x) { return 1LL*x*x;}

void calc(vector<int> first, vector<int> second, vector<int> third) 
{
    for(auto x:first) {
        auto y = lower_bound(second.begin(), second.end(), x);
        auto z = upper_bound(third.begin(), third.end(), x);
        if(y == second.end() || z == third.begin()) continue;

        // cout<<"ok"<<endl;
        z--;
        // cout<<"ok again"<<endl;

        ans = min(ans, square(*y-x)+square(x-*z)+square(*z-*y));
    }
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("../io/in.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    int tc;
    cin >> tc;
    while(tc--) {
        int nr, ng, nb;
        cin >> nr >> ng >> nb;
        vector< int > r(nr), g(ng), b(nb);
        for(int i=0; i<nr; i++) cin >> r[i];
        for(int i=0; i<ng; i++) cin >> g[i];
        for(int i=0; i<nb; i++) cin >> b[i];

        sort(r.begin(), r.end());
        sort(g.begin(), g.end());
        sort(b.begin(), b.end());

        ans = LLONG_MAX;

        calc(r, b, g);
        calc(r, g, b);
        calc(b, g, r);
        calc(b, r, g);
        calc(g, b, r);
        calc(g, r, b);

        cout << ans << "\n";
    }

    return 0;
}

