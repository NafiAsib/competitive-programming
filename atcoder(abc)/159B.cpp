#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n, a, b;
    n = s.size();
    a = (n-1)/2;
    b = (n+3)/2;
    string first, second, third, fourth;
    for(int i=0; i<a; i++) first.push_back(s[i]);
    for(int i=b-1; i<n; i++) second.push_back(s[i]);

    third = first;
    reverse(third.begin(), third.end());
    fourth = second;
    reverse(fourth.begin(), fourth.end());

    string fifth = s;
    reverse(fifth.begin(), fifth.end());

    if(s == fifth and first == third and second == fourth) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}