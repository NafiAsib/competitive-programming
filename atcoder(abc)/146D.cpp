#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define watch(x) cout<<(#x)<<" is "<<(x)<<endl
#define pass(x) cout<<"Passed step "<<(x)<<endl
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

typedef long long LL;
typedef unsigned int UI;
typedef pair<int, int> PII;
typedef vector< int > VI;
typedef vector < VI > VII;
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
    #ifdef ONLINE_JUDGE
	    freopen("../io/in.txt", "r", stdin);
	    freopen("../io/out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    int n;
    scanf("%d", &n);
    vector< PII > edges;
    int x, y;
    int mx = 1e5+1;
    vector< int > vertices[mx];

    for(int i=0; i<n; i++) {
        scanf("%d %d", &x, &y);
        edges.push_back(PII,(x,y));
    }
    int maxcolor = 0;
    for(int i=0; i<n; i++) {
        int a = 1;
        while(a == )
    }
    return 0;
}
