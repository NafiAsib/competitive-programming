#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr <<"\e[91m"<<__func__<<": "<< #x << " = " << x <<"\e[39m"<< "\n"
const int inf = 0x3f3f3f3f;

const int maxn = 22;
int a[maxn];
int n;
vector < int > ans;
int cnt = 0;
int diff = inf;
int whole_sum = 0;

void subset(int indx) 
{
    if(indx == n ) {
        if((int)ans.size() != 0 && (int)ans.size() != n) {
            int sum = 0;
            for(auto i:ans) sum += i;
            if(abs((whole_sum - sum) - sum) < diff) {
                diff = abs((whole_sum - sum) - sum);       
            }
        }
        return;
    }
    subset(indx+1);
    ans.push_back(a[indx]);
    subset(indx+1);
    ans.pop_back();
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../io/in.txt", "r", stdin);
    //freopen("../io/out.txt", "w", stdout);
#endif // ONLINE_JUDGE
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a[i];
        whole_sum += a[i];
        // cout << "here";
    }
    if(n == 1) cout << a[0] << "\n";
    else {
        subset(0);
        cout << diff << "\n";
    }
    return 0;
}
