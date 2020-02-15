#include <bits/stdc++.h>
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
using namespace std;

int main() 
{
    int n;
    string s;
    cin>>n>>s;
    int mn = INT_MAX;
    for(int i=0; i<n; i++) {
        int current_cost = 0;
        current_cost += min((abs(s[i]-'A')), abs(s[i]-'Z')+1);
        //watch(current_cost);
        current_cost += min((abs(s[i+1]-'C')), abs(s[i+1]-'Z')+3);
        //watch(current_cost);
        current_cost += min((abs('T'-s[i+2])), abs(s[i+2]-'A')+7);
       // watch(current_cost);
        current_cost += min((abs(s[i+3]-'G')), abs(s[i+3]-'Z')+7);
        //watch(current_cost);
        mn = min(mn, current_cost);
        //if(current_cost==15) cout<<i<<endl;
    }
    cout<<mn<<endl;
    ////cout<<'T'-'K'<<endl;
    return 0;
}