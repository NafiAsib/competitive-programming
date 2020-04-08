#include <bits/stdc++.h>
using namespace std;



int main()
{
    // freopen("../io/in.txt", "r", stdin);
    int n, x;
    scanf("%d %d", &n, &x);
    if(n <=1 ) {
        printf("0\n");
        return 0;
    }
    int freq[200005] = {0};
    int tmp;
    long long ans = 0;
    for(int i=0; i<n; i++) {
        cin>>tmp;
        ans += freq[tmp^x];
        freq[tmp]++;
    }
    cout<<ans<<endl;

    return 0;
}