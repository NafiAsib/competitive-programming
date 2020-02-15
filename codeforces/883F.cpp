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

int main()
{
    fr;
    int n;
    cin>>n;
    map< string, int >mp;
    while(n--) {
        string s;
        cin>>s;
        //int len = s.size();
        /*for(int i = 0; i < len; i++) {
            if(s[i] == 'u') s[i] = '*';
            else if(s[i] == 'o' and s[i+1] == 'o') {
                s[i] = '*';
                for(int j = i+2; j < len; j++) {
                    s[j-1] = s[j];
                }
                s.erase(s.begin() + len-1);
            }
            else if(s[i] == 'h') s[i] = '#';
            else if(s[i] == 'k' and s[i+1] == 'h') {
                s[i] = '#';
                for(int j = i+2; j < len-1; j++) {
                    s[j-1] = s[j];
                }
            }
            s.erase(s.begin() + len-1);
        }*/
        
        mp[s] = 1;
    }
    for(auto &it : mp) cout<<it.first<<endl;
    return 0;
}