#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define endl "\n"
#define off() ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fr freopen("in.txt", "r", stdin)
#define fw freopen("out.txt", "w", stdout)
#define pb push_back
#define eb emplace_back
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl

typedef long long ll;
typedef unsigned int ui;

int main()
{
    //fr; fw;
    int tc, q = 0;
    cin>>tc;
    string a, b;
    char c;
    int d1, d2, y1, y2;
    while(tc--) {
        cin>>a>>d1>>c>>y1;
        cin>>b>>d2>>c>>y2;
        int ans = 0;
        if(y1 == y2) {
            if(__isleap(y1)) {
                if(a[0] == b[0] and a[1] == b[1] and d1 == d2) {
                    if(a[0] == 'F' and d1 == 29) ans = 1;
                    else ans = 0;
                }
                else {
                    if(a[0] == 'J' and a[1] == 'a') ans++;
                    else if(a[0] == 'F' and d1 <= 29) ans++; 
                    if(b[0] == 'J' and b[1] == 'a') ans--;
                    else if(b[0] == 'F' and d2 < 29) ans--;
                }  
                cout<<"Case "<<++q<<": "<<ans<<endl;
                continue;
            }
            else {cout<<"Case "<<++q<<": 0"<<endl; continue;}
        }
        if(__isleap(y1)) {
            if((a[0] == 'J' and a[1] == 'a')) y1--;
            else if(a[0] == 'F') y1--;
        }
        
        if(__isleap(y2)) {
            if (b[0] == 'J' and b[1] == 'a') y2--;
            else if (b[0] == 'F' and d2 < 29) y2--;
        }
        ans = (y2/4-y2/100+y2/400) - (y1/4-y1/100+y1/400);
        cout<<"Case "<<++q<<": "<<ans<<endl;
    }
    return 0;
}