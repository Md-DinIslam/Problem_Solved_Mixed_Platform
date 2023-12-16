/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    int q, s;
    cin >> q >> s;
    while (q--) {
        int n;
        cin >> n;
        ll v[n], pref[n + 1] = {0};
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        sort(v, v + n);
        for (int i = 1; i <= n; ++i)
            pref[i] = v[i - 1] + pref[i - 1];

        if (s == 0) {
            if (n & 1) cout << (pref[n / 2 + 1]) << '\n';
            else cout << (pref[n / 2 + 1] - pref[1]) << '\n';
            // ll ans = 0;
            // for (int i = 1; i <= n / 2; ++i) ans += v[i];
            // ans += v[0] * (n & 1);
            // cout << ans << '\n';
        }
        else {
            ll ans = 0;
            for (int i = 0; i < n; ++i) {
                int m = ((n - i) / 2) + ((n - i) % 2);
                ans = max(ans, pref[i + m] - pref[i]);
            }
            cout << ans << '\n';
        }
    }
}
int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    int t = 1;
    // cin >> t;
    while (t--) solve();
}