#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int small, j;
    for (int i = n - 1; i >= 0; i--)
    {
        j = i - 1;
        small = v[i];
        while (j >= 0 && v[j] > small)
        {
            v[j + 1] = v[j];
            for (auto &k : v)
            {
                cout << k << " ";
            }
            cout << endl;
            j--;
        }
        v[j + 1] = small;
    }
    for (auto &i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}