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

int main()
{
    //fr;
    map<char, int > ber;
    map<int, char> eng;
    char temp; string text;
    for(int i = 0; i < 26; i++) {
        cin>>temp;
        ber[temp] = i;
    }
    for(int i = 0; i < 26; i++) {
        cin>>temp;
        eng[i] = temp;
    }
    cin>>text;
    int len = text.size();
    for(int i = 0; i < len; i++) {
        if(text[i]>= 48 && text[i] <= 57) cout<<text[i];
        else if(text[i] >= 65 && text[i] <= 90) {
            temp = text[i]+32;
            int k = ber[temp];
            temp = eng[k]-32;
            cout<<temp;
        }
        else cout<<eng[ber[text[i]]];
    }
    cout<<endl;
    return 0;
}