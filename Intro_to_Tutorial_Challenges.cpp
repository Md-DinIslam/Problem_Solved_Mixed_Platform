#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v;
    cin >> v;
    int n;
    cin >> n;
    vector<int> array;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        array.push_back(x);
        if (array[i] == v)
            cout << i << endl;
    }
    return 0;
}