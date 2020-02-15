#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, index = 0, n, current = 1;
    char str[10];
    bool sense = 1;

    cin >> n;

    for(i = 0; i < n; i++, current++) {
        cin>>str;
        if(str[0] == 'm') continue;
        index = atoi(str);
        if(index != current) sense = 0;
    }

    if(sense) cout<<"makes sense"<<"\n";
    else cout<<"something is fishy"<<"\n";

    return 0;
}