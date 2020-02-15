#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, rs;
    while(1) {
        cin >> s;
        if(s[0] == '#') break;
        rs = s;
        sort(rs.rbegin(), rs.rend());
        //cout << rs << endl;
        if(rs == s) cout << "No Successor\n";
        else {next_permutation(s.begin(), s.end());
        cout << s <<"\n";}
    }

    return 0;
}