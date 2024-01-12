/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mxN = 1e5 + 10;
vector<int> g[mxN];
int vis[mxN];
void dfs(int src) {
    // if (vis[src]) return;
    vis[src] = true;
    for (auto &child : g[src]) {
        // cout << "Par: " << src << " Child: " << child << '\n';
        if (vis[child]) continue;
        dfs(child);
    }
}
void solve() {
    int vertex, edge;
    cin >> vertex >> edge;
    for (int i = 0; i < edge; ++i) {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int ans = 0;
    for (int i = 1; i <= vertex; ++i) {
        if (!vis[i]) {
            dfs(i);
            ans++;
        }
    }
    cout << ans;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif
    int t = 1;
    // cin >> t;
    while (t--) solve();
    // for (int i = 1; i <= t; ++i) { //Kickstart
    //     cout << "Case #" << i << ": "; solve();
    // }
    return 0;
}