#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
#define pass(x) cout<<"Passed step "<<(x)<<endl
int mod = 1000000007; //10^9+7
const double eps = 1e-9;
const int inf = 0x3f3f3f3f;
const long long linf = 0x3f3f3f3f3f3f3f3fLL;
//const double pi = 2*acos(0.0);
//int fx[]={+1,-1,+0,+0};
//int fy[]={+0,+0,+1,-1};
//int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
//int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
/* Templates */
template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
    os << "{";
    for(auto it = v.begin(); it != v.end(); ++it) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}\n";
}

template <typename T>
void see( T a[], int n ) {
    for(int i = 0; i < n; ++i) cout << a[i] << ' ';
    cout << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("../io/in.txt", "r", stdin);
        freopen("../io/out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    int n;
    scanf("%d", &n);
    int ara[n+2][2];
    int maxy = 0;
    for(int i=0; i<n; i++) 
    {
        cin>>ara[i][0]>>ara[i][1];
        maxy = max(maxy, ara[i][1]);
    }
    int add = 0;
    for(int i=0; i<n; i++) {
        if(ara[i][1]<maxy) add++;
    }
    printf("%d\n", add);
    return 0;
}
