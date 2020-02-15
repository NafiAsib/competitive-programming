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
    #ifndef ONLINE_JUDGE
	    freopen("../io/in.txt", "r", stdin);
	    // freopen("../io/out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    int tc;
    cin>>tc;
    for(int i=0; i<tc; i++) {
        int n, k;
        cin>> n >> k;
        int hi = n, lo = 0, mid, ans, a, b, wa;

        while(hi>=lo) {
            mid = (hi+lo)/2;
            a = mid/k;
            b = mid/k+(!(mid%k==0));
            int segmentb = k/2;
            int segmenta = k/2+(!(k%2==0));
            if(segmenta*b + segmentb*a == mid) swap(segmenta, segmentb);

            // if(mid == 5) {
            //     cout<<5/3<<endl;
            //     watch(mid);
            //     watch(check);
            //     watch(b);
            // }

            if(segmenta <= k/2 && segmenta*a + segmentb*b == mid) {
                ans = mid;
                lo = mid+1; 
            }
            else hi = mid-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
