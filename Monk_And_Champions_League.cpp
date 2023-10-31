#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mxN = 1e6 + 10;
int v[mxN];
void solve() {
    int n, m;
    cin >> n >> m;
    priority_queue<int> q;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        q.push(x);
    }
    ll ans = 0;
    for (int i = 0; i < m; ++i) {
        int a = q.top();
        ans += a;
        q.pop();
        q.push(a - 1);
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
    // cin >> t;
    while (t--) {
        solve();
    }
    // for (int i = 1; i <= t; ++i) {
    //     cout << "Case " << i << ": ";
    //     solve();
    // }
}