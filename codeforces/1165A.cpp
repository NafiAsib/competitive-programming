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
int mod = 1000000007;

int main()
{
    string s;
    int n, x, y;
    cin>>n>>x>>y;
    cin>>s;
    int len = s.length();
    int moves = 0;
    int ind = len - y-1;
    if(s[ind-1] == '1') moves++;
    if(s[ind] == '0') moves++;
    for(int i = ind+1; i<len;i++) {
        if(s[i] == '1') moves++;
    }
    cout<<moves<<endl;
    return 0;
}