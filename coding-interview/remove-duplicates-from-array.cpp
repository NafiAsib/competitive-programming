#include <iostream>
using namespace std;

void remove_duplicates(int size, int ara[])
{
    int last = ara[0];
    int k = 1;
    for(int i=1; i<size; i++)
    {
        if(last != ara[i]) 
        {
            ara[k++] = ara[i];
            last = ara[i];
        }
    }
    for(int i=0; i<k; i++) 
    {
        cout<<ara[i]<<" ";
    }
    cout<<endl;
}
        
int main()
{
    int n;
    cin>>n;
    int ara[n+2];
    for(int i=0; i<n; i++) cin>>ara[i];
    remove_duplicates(n, ara);
    return 0;
}
