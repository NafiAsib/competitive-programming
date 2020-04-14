#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("../io/in.txt", "r", stdin);
    int tc;
    cin>>tc;
    while(tc--) {
        string s;
        int a[9][9];
        for(int i=0; i<9; i++) {
            cin>>s;
            for(int j=0; j<9; j++) {
                a[i][j] = s[j] - 48;
            }
        }

        int i=0, j=0;

        a[0][0]++;
        a[1][3]++;
        a[2][6]++;

        a[3][1]++;
        a[4][4]++;
        a[5][7]++;

        a[6][2]++;
        a[7][5]++;
        a[8][8]++;

        for(i=0; i<9; i++) {
            for(j=0; j<9; j++) {
                if(a[i][j] == 10) a[i][j] = 1;
            }
        }

        for(i=0; i<9; i++) {
            for(j=0; j<9; j++) cout<<a[i][j];
            cout<<"\n";
        }
    }

    return 0;
}