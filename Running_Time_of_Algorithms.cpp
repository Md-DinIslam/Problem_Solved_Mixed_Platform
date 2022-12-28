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
    int small;
    int j;
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        small = v[i];
        j = i - 1;
        for (j; j >= 0 && v[j] > small; j--)
        {
            count++;
            v[j + 1] = v[j];
        }
        v[j + 1] = small;
    }
    cout << count << endl;
    return 0;
}