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
    sf("%d", &n);
    int mina = INT_MAX, minb = INT_MAX;
    int a;
    bool flag = false;
    for(int b = 0; b < 1000000; b++) {
        a = (n-(b*7))/4;
        //watch(a);
        if(a<0) continue;
        if(a*4+b*7 == n) {
            //watch(a);
            //watch(b);
            flag = true;
            if(a<mina && b<minb) mina = a, minb = b;
            else if(a == mina && b < minb) mina = a, minb = b;
            else if(a < mina && b > minb) mina = a, minb = b;

        }
    }
    if(flag == false) {cout<<"-1"<<endl; return 0;}
    for(int i = 0; i<mina; i++) cout<<"4";
    for(int i = 0; i<minb; i++) cout<<"7";
    cout<<endl;
    return 0;
}