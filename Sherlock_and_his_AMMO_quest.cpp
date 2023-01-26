#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int, multiset<string>> m;
    while (n--)
    {
        int x;
        string str;
        cin >> str >> x;
        // m[-1 * x].insert(str);
        m[x].insert(str);
    }
    // for (auto &i : m)
    // {
    //     auto &j = i.second;
    //     auto &k = i.first;
    //     for (auto &ammo : j)
    //     {
    //         cout << ammo << " " << (-1 * k) << endl;
    //     }
    // }
    auto cur_it = --m.end();
    while (true)
    {
        auto &name = cur_it->second;
        auto &num = cur_it->first;
        for (auto &ammo : name)
        {
            cout << ammo << " " << num << endl;
        }
        if (cur_it == m.begin())
        {
            break;
        }
        cur_it--;
    }
    return 0;
}