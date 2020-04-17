#include <bits/stdc++.h>
#define watch(x) cerr <<"at line "<< __LINE__ <<", " << #x << " = " << x << "\n"
using namespace std;

int main()
{
    // freopen("../io/in.txt", "r", stdin);
    int x, y, a, b, c;
    cin >> x >> y >> a >> b >> c;

    int red[a];
    int green[b];
    int white[c];

    for(int i=0; i<a; i++) cin>>red[i];
    for(int i=0; i<b; i++) cin >> green[i];
    for(int i=0; i<c; i++) cin >> white[i];

    sort(red, red+a, greater<int>());
    sort(green, green+b, greater<int>());
    sort(white, white+c, greater<int>());

    priority_queue <int, vector<int>, greater<int> > pq;

    for(int i=0; i<x; i++) pq.push(red[i]);
    for(int i=0; i<y; i++) pq.push(green[i]);
    int first = 0;
    int i=0;
    while(i<c) {
        first = pq.top();
        if(white[i] > first) {
            pq.pop();
            pq.push(white[i]);
            i++;
        }
        else break;
    }

    long long ans = 0LL;
    while(!pq.empty()) {
        ans += pq.top();
        // watch(pq.top());
        pq.pop();
    }

    cout<<ans<<"\n";

    return 0;
}

