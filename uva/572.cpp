/*-------------- Bismillahir Rahmanir Rahmin --------------*/
// Answer is 2
#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define endl "\n"
#define off()                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define fr freopen("in.txt", "r", stdin)
#define fw freopen("out.txt", "w", stdout)
#define pb push_back
#define eb emplace_back
#define PII pair<int, int>
#define watch(x) cout << (#x) << " is " << (x) << endl
#define valid(nx, ny) nx >= 0 && nx < row && ny >= 0 && ny < col && ara[nx][ny] == '@'

typedef long long ll;
typedef unsigned int ui;
//Variables
//const double pi = 2*acos(0.0);
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};

bool vis[102][102];
char ara[102][102];
int row;
int col;
void flood(int i, int j)
{
    for (int k = 0; k < 8; k++)
    {
        int nx = i + fx[k];
        int ny = j + fy[k];
        if (valid(nx, ny) and !vis[nx][ny])
        {
            vis[nx][ny] = 1;
            flood(nx, ny);
        }
    }
}

int main()
{
    //fr; fw;
    while(1) {
        cin>>row>>col;
        if(row == 0) break;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
                cin >> ara[i][j];
        }
        memset(vis, 0, sizeof vis);
        int cnt = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (ara[i][j] == '@' and vis[i][j] == 0)
                {
                    flood(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}