#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define endl "\n"
#define dbg(c) printf("in %d\n", c);
#define off() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fr freopen("in.txt", "r", stdin)
#define fw freopen("out.txt", "w", stdout)
#define pb push_back
#define eb emplace_back
#define PII pair<int, int>
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
#define N 200002
typedef long long ll;
typedef unsigned int ui;
int a[N];

int main()
{
    //fr;
    int one = 0, zero = 0, n;
    cin>>n;
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        if(a[i] == 1) one++;
        else zero++;
    }
    for(int i = 0; i < n; i++) {
        if(a[i] == 1) one--;
        else zero--;
        if(one == 0 || zero == 0) {cout<<i+1<<endl; break;}
    }
    return 0;
} 