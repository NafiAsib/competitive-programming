#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n,k;
	cin>>n>>k;
	
	if(k<=n)
	{
		cout<<1;
		
	}
	else
	{
		if(k%n==0)
		cout<<(k/n);
		else cout<<(k/n)+1;
	}

    cout<<endl;
}
