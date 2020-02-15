#include <iostream>

using namespace std;

int main()
{
    char str[100001];
    int i, n, A = 0, D = 0;

    cin>>n;

    cin>>str;

    for(i = 0; i < n; i++)
    {
        if(str[i] == 'A') A++;
        else D++;
    }

    if(A>D) cout<<"Anton"<<endl;
    else if(A<D) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;

    return 0;
}
