/*
ID: nafi.as1
PROG: ride
LANG: C++                 
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a, b;
    int m1, m2, comet = 1, group = 1;
    fin >> a >> b;

    for(int i = 0; i < a.size(); i++) comet *= a[i] - 64;
    for(int i = 0; i < b.size(); i++) group *= b[i] - 64;

    m1 = comet % 47;
    m2 = group % 47;

    if(m1 == m2) fout<<"GO"<<"\n";
    else fout<<"STAY"<<"\n";
    
    return 0;
}