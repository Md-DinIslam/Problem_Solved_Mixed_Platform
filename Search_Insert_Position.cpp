#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int low = 0, high = nums.size() - 1;
        while (low < high)
        {
            int mid = (low + high) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        cout<<"low: "<<low<<endl;
        cout<<"high: "<<high<<endl;
        if (nums[low] >= target)
            return low;
        else
            return low + 1;
    }
} go;
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
    int target;
    cin >> target;
    // int ans = go.searchInsert(v,target);
    // cout << ans << endl;
    cout<<go.searchInsert(v,target);
    return 0;
}