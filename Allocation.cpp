#include <bits/stdc++.h>
using namespace std;
int main()
{
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);
// #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
// #endif
  int t;
  cin >> t;
    int serial = 1;
  while (t--)
  {
    int n, b;
    cin >> n >> b;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
      cin >> ar[i];
    }
    sort(ar, ar + n);
    int sum = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
      sum += ar[i];
      if (sum > b)
      {
        break;
      }
      else
      {
        cnt++;
      }
    }
    cout << "Case #" << serial << ": " << cnt << endl;
    serial++;
  }
  return 0;
}