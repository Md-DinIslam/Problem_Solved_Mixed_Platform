#include <bits/stdc++.h>
using namespace std;
// unordered_map<string, int> mci;
map<char, int> mci;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> v(26);
    // string ch = "abcdefghijklmnopqrstuvwxyz";
    char ch = 'a';
    string s;
    for (int i = 0; i < 26; i++)
    {
        cin >> v[i];
    }
    cin >> s;
    int Max = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int temp_mx = v[s[i] - 'a'];
        if (Max < temp_mx)
            Max = temp_mx;
    }
    cout << s.size() << endl;
    cout<<Max<<endl;
    cout << Max * s.size() << endl;
    return 0;
}