/*-------------- Bismillahir Rahmanir Rahmin --------------*/
//
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
//Variables
//const double pi = 2*acos(0.0);
int b[10];
void preprocess(string pattern) {
    int m = pattern.size();
    int i = 0, j = -1;
    b[i] = j;
    while(i<m) {
        while(j>=0 && pattern[i] != pattern[j]) j = b[j];
        i++;
        j++;
        b[i] = j;
    }
}
int kmp(string text) {
    string pattern = "xxx";
    preprocess(pattern);
    int i = 0, j = 0;
    int n = text.size();
    int m = pattern.size();
    int cnt= 0;
    while(i<n) {
        while(j>=0 && text[i] != pattern[j]) j = b[j];
        i++, j++;
        if(j == m) {
            cnt++;
            j = b[j];
        }
    }
    return cnt;
}

int main()
{
    string s;
    int n;
    cin>>n>>s;
    int ans = kmp(s);
    cout<<ans<<endl;

    return 0;
}