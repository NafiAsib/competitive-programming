#include <iostream>
using namespace std;

int m, n;
bool vis[3][3];
int ans[9];
int ara[3][3];

void spiral_order_matrix(int i, int j, int indx) 
{
    ans[indx] = ara[i][j];
    vis[i][j] = 1;
    if(i == 2 and j == 0) cout<<"came"<<endl;
    if(i == 2 and j == 1) cout<<"8"<<endl;
    if(j+1<n and !vis[i][j+1]) spiral_order_matrix(i, j+1, indx+1);
    else if(i+1<m and !vis[i+1][j]) spiral_order_matrix(i+1, j, indx+1);
    else if(j-1>=0 and !vis[i][j-1]) spiral_order_matrix(i, j-1, indx+1);
    else if(i-1>=0 and !vis[i-1][j]) spiral_order_matrix(i-1, j, indx+1);
}

int main()
{
    n = 3, m = 3;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) cin>>ara[i][j];
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) vis[i][j] = false;
    }
    cout<<"7 is "<<vis[2][0]<<endl;
    cout<<"2 1 is "<<ara[2][0]<<endl;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) cout<<ara[i][j]<<" ";
        cout<<endl;
    }

    spiral_order_matrix(0, 0, 0);
    for(int i=0; i<n*m; i++) cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}