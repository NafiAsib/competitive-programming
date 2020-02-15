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
    int n; 
    cin>>n;
    ll save = 0;
    int tf = 0, fif = 0, hun = 0;
    int num;
    bool flag = true;
    for(int i = 0; i < n; i++) {
        cin>>num;
        if(flag == true) {
            if(num == 25) {
                tf++;
                //save += 25;
            }
            else if(num == 50) {
                if(tf < 1) {
                    flag = false;
                }
                else {
                    tf--;
                    fif++;
                    //save += 25;
                }
            }
            else {
                if(tf < 1) {
                    flag = false;
                }
                else if(tf < 3 and fif < 1) {
                    flag = false;
                }
                else {
                    if(fif > 0) {
                        fif--;
                        tf -= 1;
                    }
                    else tf -= 3;
                }
            }
        }
    }
    if(flag == false) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}