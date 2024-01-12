/* GREEN UNIVERSITY OF BANGLADESH
       Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 1e9
#define ff first
#define ss second
int vis[8][8], lev[8][8];
void reset() {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            vis[i][j] = 0;
            lev[i][j] = -1;
        }
    }
}
int getX(string s) {
    return s[0] - 'a';
}
int getY(string s) {
    return s[1] - '1';
}
bool isValid(int x, int y) {
    return (x >= 0 && x < 8 && y >= 0 && y < 8);
}
vector<pair<int, int>> direction = {
    {2, -1}, {2, 1},
    { -1, 2}, {1, 2},
    { -2, 1}, { -2, -1},
    {1, -2}, { -1, -2}
};
int bfs(string s, string e) {
    int sx = getX(s);
    int sy = getY(s);
    int dx = getX(e);
    int dy = getY(e);

    queue<pair<int, int>> q;
    q.push({sx, sy});
    vis[sx][sy] = 1;
    lev[sx][sy] = 0;

    while (!q.empty()) {
        pair<int, int> curr = q.front();
        q.pop();

        int x = curr.ff, y = curr.ss;

        for (auto &move : direction) {
            int childx = move.ff + x;
            int childy = move.ss + y;
            // cout << childx << " " << childy << " \n";
            if (!isValid(childx, childy)) continue;
            if (!vis[childx][childy]) {
                q.push({childx, childy});
                lev[childx][childy] = lev[x][y] + 1;
                vis[childx][childy] = true;
            }
        }

        if (lev[dx][dy] != -1) {
            return lev[dx][dy];
        }
    }

    return lev[dx][dy];
}
void solve() {
    reset();
    // memset(vis, 0, 8);
    // memset(lev, -1, 8);

    string s, e;
    cin >> s >> e;
    cout << bfs(s, e) << '\n';
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
    cin >> t;
    while (t--) solve();
    // for (int i = 1; i <= t; ++i) { //Kickstart
    //     cout << "Case #" << i << ": "; solve();
    // }
    return 0;
}