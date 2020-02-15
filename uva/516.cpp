//08/Feb/19 LightOJ
#include <bits/stdc++.h>
#define endl "\n"
#define sync_off() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define RESET(a,b)	memset(a,b,sizeof(a))
#define SIZE 1000000
using namespace std;
typedef long long ll;
bool prime[SIZE];
int power[32770];

void sieve()
{
    ll i, j;
    ll root = sqrt(SIZE)+1;
    for(i = 2; i <= SIZE; i++) prime[i] = true;
    for(i = 2; i <= root; i++) {
        if(prime[i] == true) {
            for(j = 2; i*j <= SIZE; j++) {
                prime[i*j] = false;
            }
        }
    }
}

bool isprime(ll n) {
    return prime[n];
}

int pwr(ll a, ll b) {
    ll i, x = 1;
    for(i = 0; i < b; i++) x = x*a;
    return x;
}
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
    sync_off();
    sieve();

    string str;
    ll i, j, number, num, ara[500];
    bool flag;
    bool check;

    while(1) {
        getline(cin, str);
        if(str[0] == '0') break;
        for(i = 0; i < 32770; i++) power[i] = 0;
        RESET(ara, 0);
        istringstream iS(str);
        j = 0;
        while(iS >> number) {
            num = number;
            ara[j] = num;
            j++;
        } 
        num = 1;
        for(i = 0; i < j; i+=2) {
            num *= pwr(ara[i], ara[i+1]);
        }
        num--;

        while(num%2 == 0 && num != 1) {
            num /= 2;
            power[2]++;
        }
        
        for(i = 3; i < 32770; i+=2) {
            if(num%i == 0 && isprime(i) == true) {
                while(num%i == 0 && num != 1) {
                    num /= i;
                    power[i]++;
                }
                if(num == 1) break;
            }
            if(num == 1) break;
        }
        flag = true;
        for(i = 32770; i >= 2; i--) {
            if(power[i] != 0) {
                if(flag == false) {cout <<" ";}
                cout << i << " " << power[i];
                flag = false;
            }
        }      
        cout << endl;
    }
    return 0;
}