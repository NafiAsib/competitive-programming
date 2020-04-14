#include <bits/stdc++.h>
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
using namespace std;

const int sz = 2e5+5;
int a[sz];

int main()
{
    // freopen("../io/in.txt", "r", stdin);
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        unordered_set< int > s;
        int max_common_number = 0, distinct = 0;
        for(int i=0; i<=n; i++) a[i] = 0;

        int x;
        for(int i=0; i<n; i++) {
            cin>>x;
            a[x]++;
            s.insert(x);
            max_common_number = max(a[x], max_common_number);
        }

        int left = 0, right = n/2, ans = 0, mid;
        distinct = s.size();
        // watch(right);
        // watch(distinct);
        // watch(max_common_number);


        while(left <= right) {
            mid = left + (right-left)/2;
            // watch(mid);
           
            if(max_common_number - mid > 0 && distinct >= mid) {
                ans = mid;
                left = mid+1;
            }

            else if(max_common_number == mid && distinct-1>=mid) {
                ans = mid;
                left = mid+1;
            }

            else right = mid-1;
        }

        cout << ans <<"\n";
    }

    return 0;
}
