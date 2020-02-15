#include <bits/stdc++.h>
using namespace std;
#define valid(x, y) x>=0 && x<n && y>=0 && y<n && ara[x][y] == '1' && vis[x][y] == 0
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};

int n;
char ara[26][26];
bool vis[26][26];

void fill(int i, int j) {
    for(int k = 0; k < 8; k++) {
        int x = i + fx[k];
        int y = j + fy[k];
        if(valid(x, y)) {
            vis[x][y] = 1;
            fill(x, y);
        }
    }
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int k = 0;
    while(cin>>n) {
        memset(vis, 0, sizeof vis);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) cin>>ara[i][j];
        }
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(ara[i][j] == '1' && vis[i][j] == 0) {
                    fill(i, j);
                    cnt++;
                }
            }
        }
       
        cout<<"Image number "<<++k<<" contains "<<cnt<<" war eagles."<<endl;
    }

    return 0;
}