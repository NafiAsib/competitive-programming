#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    int left[300],right[300], n, i, count = 0, sup = 0, x, y, j, hi, lo, le, ri;
    cin>>n;

    for(i = 0; i < n; i++) {
        cin>>left[i]>>right[i];
    }

    for(i = 0; i < n; i++) {
        x = left[i];
        y = right[i];
        hi = 0;
        lo = 0;
        le = 0;
        ri = 0;
        for(j = 0; j < n; j++) {
            if(x > left[j] && y == right[j]) ri++;
            else if(x < left[j] && y == right[j]) le++;
            else if(x == left[j] && y < right[j]) lo++;
            else if(x == left[j] && y > right[j]) hi++;
        }
        if(ri >= 1 && le >= 1 && lo >= 1 && hi >= 1) sup++;
    }

    cout<<sup<<endl;

    return 0;
}