#include <bits/stdc++.h>
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
using namespace std;
typedef long double ld;
ld n, p;
const int maxn = 1e5+2;
ld a[maxn], b[maxn];

bool search(double val) {
    ld sum_of_tps = 0, tps;

    for(int i=0; i<n; i++) {
        tps = val*a[i] - b[i];
        if(tps <= (ld)0) continue;
        sum_of_tps += tps;
    }
    ld hudai = p*val;
    return hudai >= sum_of_tps;
}

int main()
{
	// freopen("../io/in.txt", "r", stdin);

    cin>>n>>p;

    for(int i=0; i<n; i++) cin>>a[i]>>b[i];

    ld sum_of_a = 0;
    for(int i=0; i<n; i++) sum_of_a += a[i];
    if(sum_of_a <= p) cout<<"-1"<<endl;
    
    else {
        // cout<<"work"<<endl;
        ld hi = 1e10, lo = 0;
        ld mid;
        ld ans;
        int i = 0;

        while(i<=200)
        {
            mid = (hi+lo)/2.0;
            if(search(mid)) {
                ans = mid;
                lo = mid;
            }
            else hi = mid;
            i++;
        }
        cout<<fixed;
        cout<<setprecision(10)<<ans<<endl;
         //watch(mid);
    }
   
    return 0;
}