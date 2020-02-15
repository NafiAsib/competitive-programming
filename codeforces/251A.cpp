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
    //fr;
    int n, k;
    cin>>n>>k;
    int a[n+2];
    for(int i = 0; i < n; i++) cin>>a[i];
    if(n<3 && a[2]-a[0]>k) {cout<<"0"<<endl; return 0;}
    int lp = a[0], rp = a[2], i = 2, j = 0;
    ll temp_cnt = 0;
    ll num;
    while(i>j && i < n) {
        if( a[i]-a[j]<=k ) {
            num = i-j;
            temp_cnt += (num*(num-1))/2;
            i++;
        }
        else {
            j++;
        }
        if((i-j)<2) i++;
    }
    cout<<temp_cnt<<endl;
    return 0;
}