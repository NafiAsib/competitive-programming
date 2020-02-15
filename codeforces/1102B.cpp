#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define endl "\n"
#define off ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fr freopen("in.txt", "r", stdin)
#define fw freopen("out.txt", "w", stdout)
#define pb push_back
#define eb emplace_back
#define PII pair<int, int>
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
#define pass printf("Passed Here\n")

typedef long long ll;
typedef unsigned int ui;
int mod = 1000000007;
int ara[50005], a[50005], used[50005];

int main()
{
    int n, k;
    cin>>n>>k;
    int num;
    bool flag = false;
    memset(ara, 0, sizeof ara);
    for(int i = 0; i<n; i++) {
        cin>>num;
        a[i] = num;
        ara[num]++;
        if(ara[num]>k) flag = true;
    }

    if(n == k) {
        cout<<"YES"<<endl;
        for(int i = 1; i<=k; i++) cout<<i<<" ";
        cout<<endl;
        return 0;
    }

    if(flag) cout<<"NO"<<endl;
    else {
        int res[n+2];
        int usedk[k+2];
        memset(usedk, 0, sizeof usedk);
        memset(used, 0, sizeof used);
        int limitk = 0;
        for(int i = 0; i < n; i++) {
            res[i] = used[a[i]]+1;
            usedk[res[i]]++;
            limitk = max(limitk, res[i]);
            used[a[i]]++;
        }
        if(limitk != k) {
            int dif = k - limitk;
            int i = 0;
            while(1) {
                if(dif == 0) break;
                if(usedk[res[i]]>1) {
                    res[i] = k;
                    dif--;
                    k--;
                    usedk[res[i]]--;
                }
                i++;    
            }
        }
        cout<<"YES"<<endl;
        for(int i = 0; i<n; i++) cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}