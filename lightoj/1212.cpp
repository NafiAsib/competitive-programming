#include <iostream>
#include <list>
#include <iterator>

#define pf printf
#define sf scanf
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif //ONLINE_JUDGE
    int T, i, j, n, m, val;
    bool flag;
    string s;
    sf("%d", &T);

    for(i = 1; i <= T; i++) {
        cin >> n >> m;
        list< int > q;

        flag = true;
        if(flag == true) {
                pf("Case %d:\n", i);
                flag = false;
            }
        
        for(j = 0; j < m; j++) {
            cin >> s;
            if(s[1] == 'u') {
                cin >> val;
                if(q.size() == n) {
                    pf("The queue is full\n");
                    continue;
                }
                else if(s[4] == 'L') {
                    q.push_front(val);
                    printf("Pushed in left: %d\n", val);
                }
                else if(s[4] == 'R') {
                    q.push_back(val);
                    printf("Pushed in right: %d\n", val);
                }
            }

            else if(s[1] == 'o') {
                if(q.size() == 0) {
                    pf("The queue is empty\n");
                    continue;
                }
                else if(s[3] == 'L') {
                    pf("Popped from left: %d\n", q.front());
                    q.pop_front();
                }
                else if(s[3] == 'R') {
                    pf("Popped from right: %d\n", q.back());
                    q.pop_back();
                }
            }
        }
    }
}