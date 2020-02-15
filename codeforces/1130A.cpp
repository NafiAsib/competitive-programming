#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif */

    int n; cin>>n;
    int ara[n+2], cnt_pos = 0, cnt_zero = 0, cnt_neg = 0;
    for(int i = 0; i < n; i++) {
        cin>>ara[i];
        if(ara[i] == 0) cnt_zero++;
        else if(ara[i] < 0) cnt_neg++;
        else if(ara[i] > 0) cnt_pos++;
    }
    //if(cnt_zero >= ceil(n/2)) {cout<<"0"<<endl; return 0;}
    if(cnt_neg >= ceil((double)n/(double)2)) cout<<"-1"<<endl;
    else if(cnt_pos >= ceil((double)n/(double)2)) cout<<"1"<<endl;
    else cout <<"0"<<endl;

    return 0;
}