#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define endl "\n"
#define off ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fr freopen("in.txt", "r", stdin)
#define fw freopen("out.txt", "w", stdout)
#define pb push_back
#define eb emplace_back
#define PII pair<int, int>
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
#define pass printf("Passed Here\n")

typedef long long ll;
typedef unsigned int ui;

int main()
{   
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin>>n>>m;
    if(n == m) {
        for(int i = 0; i<n; i++)
            cout<<"BG";
        cout<<endl;
    }
    else if(n>m) {
        for(int i = 0; i < m; i++) cout<<"BG";
        int diff = n-m;
        for(int i = 0; i<diff; i++) cout<<"B";
        cout<<endl;
    }
    else if(m>n) {
        for(int i = 0; i < n; i++) cout<<"GB";
        int diff = m-n;
        for(int i = 0; i<diff; i++) cout<<"G";
        cout<<endl;
    }
    return 0;
}