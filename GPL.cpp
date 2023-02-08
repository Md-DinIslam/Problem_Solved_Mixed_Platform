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
  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    long long sum = 0;
    long long powe_2 = 1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
      int binary_d = s[i] - '0';
      sum += (binary_d * powe_2);
      powe_2 *= 2;
    }
    cout << sum << endl;
  }
  return 0;
}