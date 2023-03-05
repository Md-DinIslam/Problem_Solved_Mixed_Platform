#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> SubSets (vector<int> &nums){
    vector<vector<int>> AllSub;
    int size = nums.size();
    int subCnt = (1<<size);
    for(int mask = 0; mask < subCnt; ++mask){
        vector<int> subset;
        for(int j = 0; j < size; ++j){
            if(mask & (1 << j)) subset.push_back(nums[j]);
        }
        AllSub.push_back(subset);
    }
    return AllSub;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0;i < n; ++i){
        cin>>nums[i];
    }
    auto allSub = SubSets(nums);
    for(auto &ans : allSub){
        for(auto &ele: ans){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}