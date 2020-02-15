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
ll prod(int a){
    ll ans = 1;
    while(a) {
        ans *= a%10;
        a /= 10;
    }
    return ans;
}
int to_int(string s) {
    int num = 0;
    int len = s.size();
    for(int i = 0; i < len; i++) num = num*10+(s[i]-'0');
    return num;
}
int main()
{
    string s;
    cin>>s;
    int len = s.size();
    int num = to_int(s);
    ll ans = prod(num);
    for(int pos = 0; pos < len; pos++) {
        if(s[pos] == '0') continue;
        string str = s;
        str[pos] = ((str[pos] - '0') - 1)+ '0';
        for(int i = pos+1; i < len; i++) str[i] = '9';
        ///watch(str);
        num = to_int(str);
        ll temp = prod(num);
        ans = max(ans, temp);
    }
    cout<<ans<<endl;
    return 0;
}