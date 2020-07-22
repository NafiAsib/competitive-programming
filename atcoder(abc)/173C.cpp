#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr <<"\e[91m"<<__func__<<": "<< #x << " = " << x <<"\e[39m"<< "\n"
typedef pair<int, int> pii;
typedef long long ll;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;

int h, w, k;
char a[7][7];
char b[7][7];

void cp() 
{
    for(int i=0; i<h; i++) 
        for(int j=0; j<w; j++) b[i][j] = a[i][j];

    return;
}

void color(int m, int n) 
{
    for(int i=0; i<h; i++) {
        if(m&(1<<i)) {
            for(int x=0; x<w; x++) b[i][x] = 'r';
        }
    }

    for(int i=0; i<w; i++) {
        if(n&(1<<i)) {
            for(int x=0; x<h; x++) b[x][i] = 'r';
        }
    }
}

bool check() 
{
    int total = 0;
    for(int i=0; i<h; i++) 
        for(int j=0; j<w; j++) 
            if(b[i][j] == '#') 
                total++;
    
    if(total == k) return true;
    else return false;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../io/in.txt", "r", stdin);
    //freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> h >> w >> k;
    for(int i=0; i<h; i++) 
        for(int j=0; j<w; j++) cin >> a[i][j];
    
    int ans = 0;
    for(int i=0; i<(1<<h); i++) {
        for(int j=0; j<(1<<w); j++) {
            cp();
            color(i, j);
            if(check()) ans++;
        }
    }

    cout << ans << "\n";
    return 0;
}
