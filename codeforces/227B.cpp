#include <bits/stdc++.h>
//#include <vector>

using namespace std;

int ara[100001];

int main()
{
    //vector< int > ara;
    long long n, m, i, j, vasya = 0, b, petya = 0, a;
    cin>>n;

    for(i = 0; i < n; i++)
    {
        cin>>a;
        ara[a] = i+1;
    }

    cin>>m;

    for(i = 0; i < m; i++)
    {
        cin>>a;

        vasya += ara[a];
        petya += n - ara[a] + 1;
    }

    

    cout<<vasya<<" "<<petya<<endl;

    return 0;
}