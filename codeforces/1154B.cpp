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
    int n;
    cin>>n;
    int a[n+2];
    int mark[101];
    memset(mark, 0, sizeof mark);
    bool oe = false, odd = false, even = false;
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        mark[a[i]]++;
        if(a[i]&1) odd = true;
        if(!(a[i]&1)) even = true;
        if(odd == true and even == true) oe = true;
    }
    sort(a, a+n);
    if(n<=2) {
        if(n == 1) cout<<"0"<<endl;
        if(n == 2) {
            if(a[1]-a[0] == 1) cout<<"1"<<endl;
            else if((a[1]%2 == 0 || a[0]%2 == 0 ) and (a[1]%2!=0 || a[0]%2!=0)) cout<<a[1]-a[0]<<endl;
            else cout<<(a[1]-a[0])/2<<endl;
            }
        return 0;
    }
    //int diff = a[n-1] - a[0];
    /*int diff = 0;   
    bool flag = false;
    for(int i = 0; i<n-1; i++) {
        if(a[i] != a[i+1] and flag == false) {
            flag = true;
            if(oe == false) diff = (a[i+1] -a[i])/2;
            else diff = (a[i+1] -a[i]);
        }
        if(a[i+1]-a[i] != 0 and flag == true) {
            if(oe == false) {
                if(((a[i+1]-a[i])/2) != diff) {cout<<"-1"<<endl;return 0;}
                
            }
            else if(a[i+1]-a[i] != diff) {cout<<"-1"<<endl; return 0;}
            
        }
    }*/
    int cnt = 0;
    for(int i = 1; i<101; i++) if(mark[i] != 0) cnt++;
    int diff = 0;   
    bool flag = false;
    for(int i = 0; i<n-1; i++) {
        if(a[i] != a[i+1] and flag == false) {
            flag = true;
            //if(oe == false) diff = (a[i+1] -a[i])/2;
            //else 
            diff = (a[i+1] -a[i]);
        }
        if(a[i+1]-a[i] != 0 and flag == true) {
            /*if(oe == false) {
                if(((a[i+1]-a[i])/2) != diff) {cout<<"-1"<<endl;return 0;}
                
            }
            else */
            if(a[i+1]-a[i] != diff) {cout<<"-1"<<endl; return 0;}
            
        }
    }
    if(a[n-1] - a[0] > (2*diff) and flag == true) cout<<"-1"<<endl;
    else if(cnt == 2 and (a[n-1]-a[0])%2 == 0) cout<<diff/2<<endl; 
    //else if((a[n-1]-a[0])%2 == 0) cout<<diff/2<<endl;
    else cout<<diff<<endl;
    return 0;
}