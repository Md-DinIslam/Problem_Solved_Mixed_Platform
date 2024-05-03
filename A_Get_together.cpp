/* GREEN UNIVERSITY OF BANGLADESH
    Md DinIslam, Batch-221 (CSE)
*/
#include <bits/stdc++.h>
using namespace std;

// Debug..
#ifdef LOCAL
#include "debug.h"
#endif

#define ll long long
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
#define arr array

const int mxN = 1e5 + 10;
const ll inf = 1e18;

int n;
arr<double, 2> v[mxN];

bool canGather(double mid) {
    arr<double, 2> curr = { -inf, inf};

    for (int i = 0; i < n; ++i) {
        double left = v[i][0] - v[i][1] * mid;
        double right = v[i][0] + v[i][1] * mid;

        curr[0] = max(curr[0], left);
        curr[1] = min(curr[1], right);
    }

    return curr[0] <= curr[1];
}

void Din() {
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> v[i][0] >> v[i][1];
    }

    double lb = 0, rb = 1e9;
    for (int i = 0; i < 99; ++i) {
        double mid = lb + (rb - lb) / 2;

        if (canGather(mid))
            rb = mid;
        else
            lb = mid;
    }

    cout << fixed << setprecision(15) << lb << '\n';
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) Din();
    // for (int i = 1; i <= t; ++i) { // Kickstart
    //     cout << "Case #" << i << ": "; Din();
    // }
    return 0;
}