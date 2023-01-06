#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x <= 4 && x >= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout <<"NO" << endl;
        }
    }
    return 0;
}