#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> ar;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ar.push_back(x);
    }
    int s_val, j;
    for (int i = 1; i < n; i++)
    {
        s_val = ar[i];
        j = i - 1;
        // while (j >= 0 && s_val < ar[j])
        // {
        //     ar[j + 1] = ar[j];
        //     j--;
        // }
        for (j; j >= 0 && ar[j] > s_val; j--)
        {
            ar[j + 1] = ar[j];
        }
        ar[j + 1] = s_val;
        for (auto &k : ar)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}