#include <bits/stdc++.h>
#define watch(x) cerr <<"at line "<< __LINE__ <<", " << #x << " = " << x << "\n"
using namespace std;

int n, m;


int main()
{
    cin >> n >> m;
    bool vis[10005] = {false};
    queue< pair<int, int> > q;
    q.push({n, 0});
    vis[n] = true;
    //int cnt = 0;

    int ans;

    while(!q.empty()) {
        pair<int, int> u = q.front();
        int top = u.first;
        q.pop();

        if(top == m) {
            ans = u.second;
            break;
        }

        else if(top*2 <= 10000 && top*2 <= 2*m) {
            if(!vis[top*2]) {
                q.push({top*2, u.second+1});
                vis[top*2] = true;
            } 
        }
        if(top-1>0 && !vis[top-1]) {
            q.push({top-1, u.second+1});
            vis[top-1] = true;
        }
    }

    cout << ans << "\n";

    return 0;
}