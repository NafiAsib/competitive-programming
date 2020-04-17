#include <bits/stdc++.h>
#define watch(x) cerr <<"at line "<< __LINE__ <<", " << #x << " = " << x << "\n"
using namespace std;

int main()
{
    string s;
    cin >> s;
    if(s.size() < 6) cout<<"NO"<<endl;
    else cout<< (((s[2] == s[3]) && (s[4] == s[5]))? "Yes" : "No");
    cout << "\n";

    return 0;
}