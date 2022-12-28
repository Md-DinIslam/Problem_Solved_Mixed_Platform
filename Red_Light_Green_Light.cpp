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
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int h, kick = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> h;
            if (h > k)
                kick++;
        }
        cout<<kick<<endl;
    }
    return 0;
}