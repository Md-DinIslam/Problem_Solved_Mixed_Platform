#include <bits/stdc++.h>
using namespace std;
const int N = 2500;
int dp[N];
int LIS(int indx, vector<int> &nums){
    if(dp[indx] != -1) return dp[indx];
    int ans = 1;
    for(int i = 0;i < indx; ++i){
        if(nums[i] < nums[indx]){
            ans = max(ans, LIS(i,nums) + 1);
        }
    }
    return dp[indx] = ans;
}
void solve(){
    memset(dp, -1, sizeof(dp));
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i < n; ++i){
        cin>>v[i];
    }
    int ans = 0;
    for(int i = 0;i < n; ++i){
        ans = max(ans, LIS(i, v));
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // long long t;
    // cin >> t;
    // while(t--){
    //     solve();
    // }
    solve();
    return 0;
}