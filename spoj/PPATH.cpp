#include <bits/stdc++.h>
using namespace std;

int source, destination;
const int maxn = 1e5;
int prime[maxn+2];
int vis[maxn+2];

void seive()
{
    int root = sqrt(maxn);
    prime[2] = prime[3] = 0;

    for(int i=2; i<=root; i++) {
        if(prime[i] == 0) {
            for(int j=2; i*j<=maxn; j++) prime[i*j] = 1;
        }
    }
}


int number(int a[]) 
{
    int n = a[0];
    for(int i=1; i<4; i++) {
        n = (n*10)+a[i];
    }
    return n;
}

int bfs()
{
    queue< pair<int, int> > q;
    int x, y, n;
    for(int i=1000; i<=9999; i++) vis[i] = 0;
    vis[source] = 1;
    q.push({source, 0});

    pair<int, int> current;
    int digit[4];

    while(1) {
        current = q.front();
        q.pop();
        x = current.first;
        y = current.second;
        if(x == destination) return y;

        n = x;
        int ind = 3;
        while(n>0) {
           digit[ind--] = n%10;
           n /= 10;
        }
        
        for(int indx=0; indx<=3; indx++) {
            int initial_n = digit[indx];

            for(int i=0; i<=9; i++) {
                digit[indx] = i;
                n = number(digit);

                if(n>=1000 && prime[n] == 0 && vis[n] == 0) {
                    if(n == destination) return y+1;
                    q.push({n, y+1});
                    vis[n] = 1;
                }
            }
            digit[indx] = initial_n;
        }
    }
}

int main()
{
    seive();
    int tc;
    cin >> tc;
    while(tc--) {
        cin >> source >> destination;
        cout << bfs() << "\n";
    }

    return 0;
}
