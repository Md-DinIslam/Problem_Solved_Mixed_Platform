#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mxN = 1e5 + 10;
int v[mxN];
void solve() {
    int n;
    cin >> n;
    priority_queue<int> q;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    for (int i = 0; i < n; ++i) {
        q.push(v[i]);
        if (q.size() > 2) {
            ll a = q.top(); q.pop();
            ll b = q.top(); q.pop();
            ll c = q.top(); q.pop();
            cout << a * b * c << '\n';
            q.push(a), q.push(b), q.push(c);
        }
        else cout << -1 << '\n';
    }
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