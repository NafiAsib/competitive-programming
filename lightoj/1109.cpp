#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

bool cmp (pair< int, int > x, pair< int, int >y) {
	if(x.second < y.second) return true;
	else if(x.second == y.second && x.first > y.first) return true;
	else return false;
}

int main()
{
	vector< pair< int, int > > NOD;
	pair< int, int> p;
	int nod[1005];

	NOD.push_back(pair<int, int> (0,0));
	for(int i = 1; i <= 1000; i++) {
		NOD.push_back(pair< int, int > (i, 1));
	}

	for(int i = 2; i <= 1000; i++) {
		for(int j = i; j <= 1000; j += i) {
			NOD[j].second++;
		}
	}

	sort(NOD.begin(), NOD.end(), cmp);
	int t, n;
	cin >> t;
	for(int i = 1; i <= t; i++) {
		cin >> n;
		cout<<"Case "<<i<<": "<<NOD[n].first<<endl;
	}

	return 0;
}
