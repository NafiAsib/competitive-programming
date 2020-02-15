#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    char ch;
    int i, j, n, cnt = 0;
    bool flag = false;
    cin >> a;
    b = "hello";
    j = 0;
    while(a[j] != 'h') {a[j].erase(); j++;}
    while(a[j] != 'e') {a[j].erase(); j++;}
    while(a[j] != 'l' && a[j+1] != 'l') {a[j].erase(); j++;}
    while(a[j] != 'o') {a[j].erase(); j++;}

    if(a == b) cout<<"YES"<<endl;
    else cout << "NO" << endl;

    return 0;
}