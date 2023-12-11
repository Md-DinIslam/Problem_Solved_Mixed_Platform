/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ff first
#define ss second
const int mxN = 1e6 + 10;
ll v[mxN];
int n;
bool getV(ll x) {
    for (int i = 0; i < n; ++i) {
        x += v[i];
        if (x <= 0) return 0;
    }
    return 1;
}
void solve() {
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    ll lb = 1, rb = 1e12;
    ll ans = rb;
    while (lb <= rb) {
        ll mid = (lb + rb) / 2;
        if (getV(mid)) {
            ans = min(ans, mid);
            rb = mid - 1;
        }
        else lb = mid + 1;

    }
    cout << ans << '\n';
}
int main() {
    ios_base :: sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    ll t = 1;
    cin >> t;
    // while (t--) solve();
    for(int i = 1;i <= t; ++i){
        cout << "Scenario #" << i << ": ";
        solve();
    }

}