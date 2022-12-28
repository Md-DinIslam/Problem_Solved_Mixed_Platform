#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int bill[n];
    int sum = 0, avg_sum;
    for (int i = 0; i < n; i++)
    {
        cin >> bill[i];
        sum += bill[i];
    }
    avg_sum = (sum - bill[k]) / 2;
    int b;
    cin >> b;
    if (avg_sum < b)
    {
        int ans = b - avg_sum;
        cout << ans << endl;
    }
    else
    {
        cout << "Bon Appetit" << endl;
    }
    return 0;
}