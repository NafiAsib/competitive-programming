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

typedef long long ll;
typedef unsigned int ui;
char str[32];
int n, len;
vector<char> v;
bool used[30];

void combination(int i) {
    if((int)v.size() == n) {
        for(int j = 0; j < n; j++) cout<<v[j];
        cout<<endl;
        return;
    }
    for(int pos = i; pos < len; pos++) {
        v.push_back(str[pos]);
        combination(pos+1);
        v.pop_back();
        while(str[pos] == str[pos+1]) pos++;
    }
    
}

int main()
{
    //fr; fw;
    while(scanf("%s %d", str, &n) == 2) {
        len = strlen(str);
        sort(str, str+len);
        memset(used, false, sizeof used);
        combination(0);
    }
    return 0;
}