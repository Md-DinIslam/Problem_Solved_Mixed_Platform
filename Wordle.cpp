#include <bits/stdc++.h>
using namespace std;
const int N = 1e8;
int a[N];
int main()
{
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        string t;
        cin >> t;
        char m[5];
        // cout << s.size() << " " << t.size() << endl;
        for (int i = 0; i < 5; i++)
        {
            if (s[i] != t[i])
            {
                m[i] = 'B';
            }
            else
            {
                m[i] = 'G';
            }
        }
        for (int i = 0; i < 5; i++)
        {
            cout << m[i];
        }
        cout << endl;
    }
    return 0;
}