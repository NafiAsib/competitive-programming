#include <iostream>
using namespace std;

int main() 
{
    string s;
    cin>>s;
    int n = 0;
    for(int i = 0; i<s.size(); i++) {
        if(s[i] == '-') n--;
        else n++;
    }
    cout<<n<<endl;
    return 0;
}
