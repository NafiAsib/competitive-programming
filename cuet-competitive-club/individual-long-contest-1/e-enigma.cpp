#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text, pattern;
    cin>>text>>pattern;
    int len = pattern.size();
    int ans = 0;
    bool flag = false;
    int len1 = text.size();
    for(int i=0; i<len1-len+1; i++) 
    {   
        flag = false;
        int k = i;
        for(int j=0; j<len; j++) {
            if(text[k] == pattern[j]) {
                flag = true;
                break;
            }
            k++;
        }
        if(!flag) 
        {
            ans++;
            // cout<<i<<endl;
        }
    }
    cout<<ans<<endl;
    return 0;
}