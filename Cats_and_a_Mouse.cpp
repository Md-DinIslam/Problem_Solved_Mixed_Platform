#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int cat_a = abs(x - z), cat_b = abs(y - z);
        if (cat_a < cat_b)
            cout << "Cat A" << endl;
        else if (cat_a == cat_b)
            cout << "Mouse C" << endl;
        else
            cout << "Cat B" << endl;
    }
    return 0;
}