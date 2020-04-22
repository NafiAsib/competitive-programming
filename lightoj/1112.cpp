#include <bits/stdc++.h>
using namespace std;
#define watch(x) cerr <<"at line "<< __LINE__ <<", " << #x << " = " << x << "\n"
typedef pair<int, int> pii;
typedef long long ll;
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;

const int maxn = 1e5+2;
int a[maxn];
int tree[maxn];
int n;

void update(int idx, int x) 
{
    while(idx<=n) {
        tree[idx] += x;
        idx += (idx & -idx);
    }
}

int query(int idx) 
{
    int sum = 0;
    while(idx > 0) {
        sum += tree[idx];
        idx -= (idx & -idx);
    }

    return sum;
}

int main()
{
    #ifndef ONLINE_JUDGE
        // freopen("../io/in.txt", "r", stdin);
    #endif // ONLINE_JUDGE
    
    int tc;
    scanf("%d", &tc);
    for(int q=1; q<=tc; q++) {
        int k;
        scanf("%d %d", &n, &k);

        for(int i=0; i<=n; i++) a[i] = 0;
        for(int i=0; i<=n; i++) tree[i] = 0;
        int val;
        for(int i=1; i<=n; i++) {
            scanf("%d", &a[i]);
            update(i, a[i]);
        }

        int no, i, j;
        cout<<"Case "<<q<<":\n";

        while(k--) {
            scanf("%d", &no);
            if(no == 1) {
                scanf("%d", &i);
                i++;
                update(i, -a[i]);
                printf("%d\n", a[i]);
                a[i] = 0;
            }
            else if(no == 2) {
                scanf("%d %d", &i, &val);
                i++;
                a[i] += val;
                update(i, val);
            }
            else {
                scanf("%d %d", &i, &j);
                i++;
                j++;
                printf("%d\n", query(j)-query(i-1));
            }
        }
    }
    return 0;
}
