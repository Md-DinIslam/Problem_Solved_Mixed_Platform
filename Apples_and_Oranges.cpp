#include <bits/stdc++.h>
using namespace std;
int main()
{
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    int x;
    cin >> x;
    int a, b;
    cin >> a >> b;
    if ((a + b) <= x)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}