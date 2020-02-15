#include <iostream>

using namespace std;

int main()
{
    int r1, r2, c1, c2, d1, d2, x, y, z, k;

    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

    /*if(r1 == r2 || c1 == c2 || d1 == d2)
    {
        cout<<"-1"<<endl;
        return 0;
    }*/

    x = (r1+(d1-c2))/2;
    k = d1 - x;
    z = c1 - x;
    y = r1 - x;

    if(x == y || y == z || z == k || x == z || x == k|| y == k) cout <<"-1"<<endl;
    else if(x == 0 || y == 0 || z == 0 || k == 0) cout <<"-1"<<endl;
    else if(x > 9 || y > 9 || z > 9 || k > 9) cout <<"-1"<<endl;
    else cout << x <<" "<<y<<endl<<z<<" "<<k<<endl;

    return 0;
}
