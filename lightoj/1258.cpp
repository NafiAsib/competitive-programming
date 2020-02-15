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
int b[1000005];
void preprocess(string pattern) {
    int m = pattern.size();
    int i = 0, j = -1;
    b[i] = j;
    while(i<m) {
        while(j>=0 and pattern[i] != pattern[j]) j = b[j];
        i++; j++;
        b[i] = j;
    }
}

int kmp(string text) {
    string pattern = text;
    reverse(pattern.begin(), pattern.end());
    memset(b, 0, sizeof b);
    preprocess(pattern);
    int n = text.size();
    int i = 0, j = 0;
    while(i<n) {
        while(j>=0 and text[i] != pattern[j]) j = b[j];
        i++;
        j++;
    }
    //j += 1;
    //cout<<j<<endl;
    int ans = (text.size()-j)*2+j;
    return ans;
}

int main()
{
    //fr; fw;
    int tc, k = 0;
    sf("%d", &tc);
    while(tc--) {
        string text, pattern;
        int ans;
        cin>>text;
        pattern = text;
        reverse(pattern.begin(), pattern.end());
        int n = text.size();
        if(text == pattern) {pf("Case %d: %d\n", ++k, n); continue;}
        else ans = kmp(text);
        pf("Case %d: %d\n", ++k, ans);
    }

    return 0;
}