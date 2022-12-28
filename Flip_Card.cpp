#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, d,z=0;
        cin >> x >> y;
        d = x - y;
        if (y == 0 || y == x)
        {
            cout << z << endl;
        }
        else if (d < y)
        {
            cout << d << endl;
        }
        else
        {
            cout << y << endl;
        }
    }

    return 0;
}