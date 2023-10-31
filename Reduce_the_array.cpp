#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mxN = 1e6 + 10;
int v[mxN];
void solve() {
    int n;
    cin >> n;
    priority_queue<int> q;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        q.push(-x);
    }
    ll ans = 0;
    while (q.size() > 1) {
        ll a = -q.top(); q.pop();
        ll b = -q.top(); q.pop();
        q.push(-(a + b));
        ans += (a + b);
    }
    cout << ans << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    // for (int i = 1; i <= t; ++i) {
    //     cout << "Case " << i << ": ";
    //     solve();
    // }
}