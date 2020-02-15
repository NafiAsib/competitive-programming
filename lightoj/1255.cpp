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

int failure[1000005];

void failure_function(string pattern) {
    int m = pattern.size();
    failure[0] = -1;
    int i = 0, j = -1;
    while(i<m) {
        while(j>=0 && pattern[i] != pattern[j]) j = failure[j];
        i++;
        j++;
        failure[i] = j;
    }
}

int kmp(string pattern, string text) {
    int n = text.size();
    int m = pattern.size();
    int i = 0, j = 0, cnt = 0;
    while(i < n) {
        while(j >= 0 and text[i] != pattern[j]) j = failure[j];
        i++;
        j++;
        if(j == m) {
            cnt++;
            j = failure[j];
        }
    }

    return cnt;
}

int main()
{
    //fr; fw;
    int tc, k = 0;
    scanf("%d", &tc);
    while(tc--) {
        string text, pattern;
        cin>>text>>pattern;
        memset(failure, 0, sizeof failure);
        failure_function(pattern);
        pf("Case %d: %d\n", ++k, kmp(pattern, text));
    }
    
    return 0;
}