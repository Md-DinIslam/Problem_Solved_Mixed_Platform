#include <bits/stdc++.h>
using namespace std;
unordered_map<char, int> msi;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<int> sumleft(n), sumright(n);
    sumleft[0] = 0;
    sumright[n - 1] = 0;
    for (int i = 1; i < n; i++)
    {
        sumleft[i] = sumleft[i - 1] + nums[i - 1];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        sumright[i] = sumright[i + 1] + nums[i + 1];
    }
    for (int i = 0; i < n; i++){
        cout<<abs(sumleft[i] - sumright[i])<<" ";
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << sumright[i] << " ";
        // cout << sumleft[i] << " ";
    // }
    return 0;
}