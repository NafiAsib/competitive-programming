#include <bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pb push_back
int main()
{
    int i, j, n, m, num, x;
    long long min_cost = 0, max_cost = 0;
    sf("%d %d", &n, &m);
    vector< int > v;
    x = n;
    for(i = 0; i < m; i++) {
        sf("%d", &num);
        v.pb(num);
    }
    sort(v.rbegin(), v.rend());
    //for(i = 0; i < v.size(); i++) cout << v[i] << " ";
    vector< int > u;
    u = v;
    i = 0;
    while(n--) {
        if(i == u.size()) i = 0;
        max_cost += u[i];
        u[i] -= 1;
        if(u[i] < u[i+1]) i++;
        else if (u[i-1] > u[i]) i--;
    }
    //cout << max_cost << endl;
    i = 0;
    //cout << n << endl;
    //cin >> min_cost;
    sort(v.begin(), v.end());
    while(x--) {
        if(i == v.size()) i = 0;
        if(v[i] == 0) i++;
        //cout << i << endl;
        min_cost += v[i];
        v[i] -= 1;
    }
    cout<<max_cost<<" "<< min_cost << endl;
    return 0;
}