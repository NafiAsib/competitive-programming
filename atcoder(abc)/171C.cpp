#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    string ans;
    int rem;

    while(n>0) {
        rem = n%26;
        if(rem == 0) {
            n--;
            ans.push_back('z');
        }
        else {
            ans.push_back((char)96+rem);
        }

        n /= 26;
    }

    reverse(ans.begin(), ans.end());

    cout << ans << "\n";

    return 0;
}