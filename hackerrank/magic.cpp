#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int ara[n+2][n+2];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) cin>>ara[i][j];
    }
    bool flag = true;
    int sum = 0;  
    for (int i = 0; i < n; i++) 
        sum = sum + ara[i][i]; 
  
    for (int i = 0; i < n; i++) { 
        int sumr = 0;      
        for (int j = 0; j < n; j++) 
            sumr += ara[i][j]; 

        if (sumr != sum) 
        {
            cout<<"0"<<endl;
            return 0;
        } 
    } 
    for (int i = 0; i < n; i++) { 
        int sumc = 0;      
        for (int j = 0; j < n; j++) 
            sumc += ara[j][i];
        if (sum != sumc)  
        {
            cout<<"0"<<endl;
            return 0;
        }
    }
    cout<<"1"<<endl;
    return 0;
}
