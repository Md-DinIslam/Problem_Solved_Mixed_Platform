#include <bits/stdc++.h>
using namespace std;
int dp[310][5000];
int Coins(vector<int> &coin, int tk, int indx){
    if(tk == 0) return 1;
    if(indx < 0) return 0;
    if(dp[indx][tk] != -1) return dp[indx][tk];
    int ans = 0;
    for(int coin_tk = 0; coin_tk <= tk; coin_tk += coin[indx]){
        ans += Coins(coin, tk - coin_tk, indx-1);
    }
    return dp[indx][tk] = ans;
}
void solve(){
    memset(dp, -1, sizeof(dp));
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &x : v) cin>>x;
    int tk; cin>>tk;
    cout<<Coins(v, tk, n-1);
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