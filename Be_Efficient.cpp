/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mxN = 1e5 + 10;
void solve() {
    int n, m;
    cin >> n >> m;
    int v[n];
    ll sum = 0, ans = 0;
    unordered_map<ll, int> cnt;
    cnt[0]++;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sum += v[i], sum %= m;
        ans += cnt[sum];
        cnt[sum]++;
    }
    cout << ans << '\n';
}
// Main
int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    clock_t z = clock();
    ll t = 1;
    cin >> t;
    // while (t--) solve();
    for (int i = 1; i <= t; ++i) { // Kickstart
        cout << "Case " << i  << ": ";
        solve();
    }
    cerr << "\nRun Time : " << (((double)(clock() - z)) / CLOCKS_PER_SEC);
    return 0;
}