#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subsets;
void Generate(vector<int> &sub, int i, vector<int> &nums)
{
    if (i == nums.size())
    {
        subsets.push_back(sub);
        return;
    }
    Generate(sub, i + 1, nums);
    sub.push_back(nums[i]);
    Generate(sub, i + 1, nums);
    sub.pop_back();
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<int> temp;
    Generate(temp, 0, nums);
    for (auto &sub : subsets)
    {
        for (auto &ele : sub)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}